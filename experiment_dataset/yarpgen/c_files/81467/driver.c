#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)35850;
unsigned char var_8 = (unsigned char)171;
short var_9 = (short)-21602;
unsigned char var_13 = (unsigned char)71;
int zero = 0;
unsigned short var_16 = (unsigned short)40059;
short var_17 = (short)-23559;
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
