#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)32370;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)239;
int zero = 0;
unsigned char var_12 = (unsigned char)174;
unsigned short var_13 = (unsigned short)23361;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
