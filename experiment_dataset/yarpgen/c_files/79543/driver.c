#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1734718772U;
unsigned long long int var_3 = 2172568813957187029ULL;
unsigned int var_4 = 3430345366U;
int var_5 = 1039497157;
int var_6 = -1751530061;
unsigned int var_7 = 3212254102U;
unsigned char var_10 = (unsigned char)41;
long long int var_12 = -1794088857048104732LL;
unsigned char var_13 = (unsigned char)193;
int var_14 = -416443499;
int zero = 0;
unsigned long long int var_16 = 9492584667363228742ULL;
short var_17 = (short)-26822;
unsigned long long int var_18 = 11164078429084310966ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
