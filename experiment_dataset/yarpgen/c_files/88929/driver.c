#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35683;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-122;
unsigned char var_6 = (unsigned char)73;
unsigned short var_8 = (unsigned short)22817;
unsigned short var_9 = (unsigned short)55697;
signed char var_10 = (signed char)-4;
int zero = 0;
short var_11 = (short)23118;
int var_12 = 101961141;
short var_13 = (short)-22047;
signed char var_14 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
