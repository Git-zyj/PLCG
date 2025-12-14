#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
unsigned int var_3 = 682024068U;
unsigned long long int var_6 = 15607002722419019970ULL;
unsigned short var_14 = (unsigned short)54116;
unsigned char var_15 = (unsigned char)93;
int zero = 0;
unsigned int var_16 = 1988184361U;
short var_17 = (short)30760;
void init() {
}

void checksum() {
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
