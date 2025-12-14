#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -874690055;
unsigned short var_3 = (unsigned short)16695;
short var_10 = (short)1518;
int var_11 = -1138154134;
int zero = 0;
unsigned short var_15 = (unsigned short)48491;
short var_16 = (short)-5841;
unsigned char var_17 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
