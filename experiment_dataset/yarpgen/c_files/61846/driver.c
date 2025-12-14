#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1967902960398915104ULL;
unsigned short var_2 = (unsigned short)31166;
unsigned char var_3 = (unsigned char)246;
short var_4 = (short)-16008;
unsigned int var_5 = 2523943876U;
long long int var_6 = -5101877530851828755LL;
unsigned short var_7 = (unsigned short)51925;
unsigned int var_9 = 1021812924U;
int zero = 0;
short var_10 = (short)13600;
unsigned char var_11 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
