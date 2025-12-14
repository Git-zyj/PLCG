#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16934;
unsigned short var_2 = (unsigned short)28377;
unsigned char var_5 = (unsigned char)250;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_12 = 498715255;
int var_14 = 1229611953;
int var_15 = 465817768;
int var_17 = -973485252;
int zero = 0;
unsigned char var_18 = (unsigned char)24;
signed char var_19 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
