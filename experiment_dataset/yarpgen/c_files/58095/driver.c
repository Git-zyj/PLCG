#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12254;
short var_7 = (short)2402;
unsigned char var_10 = (unsigned char)58;
unsigned char var_11 = (unsigned char)61;
int zero = 0;
unsigned char var_14 = (unsigned char)45;
short var_15 = (short)-12706;
unsigned short var_16 = (unsigned short)39861;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
