#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1031444471;
unsigned char var_1 = (unsigned char)220;
short var_2 = (short)-32745;
unsigned short var_3 = (unsigned short)51899;
unsigned short var_4 = (unsigned short)45924;
unsigned short var_7 = (unsigned short)47179;
signed char var_8 = (signed char)33;
int var_12 = -1460649415;
int zero = 0;
unsigned char var_13 = (unsigned char)156;
unsigned int var_14 = 3941800225U;
int var_15 = 151446242;
signed char var_16 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
