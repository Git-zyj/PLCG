#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 623881588701459132ULL;
long long int var_2 = -7806418972078524716LL;
unsigned long long int var_7 = 12758203088631926540ULL;
signed char var_11 = (signed char)-86;
short var_12 = (short)-8197;
unsigned int var_14 = 1064275742U;
int zero = 0;
short var_17 = (short)7242;
int var_18 = 1321808944;
int var_19 = 212167061;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
