#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48901;
int var_5 = -644556489;
int var_8 = 1518965871;
unsigned short var_11 = (unsigned short)44372;
int zero = 0;
unsigned char var_19 = (unsigned char)117;
unsigned short var_20 = (unsigned short)56650;
unsigned short var_21 = (unsigned short)10254;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
