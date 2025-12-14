#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1658497429U;
unsigned int var_1 = 4269664247U;
signed char var_6 = (signed char)95;
unsigned char var_8 = (unsigned char)203;
signed char var_10 = (signed char)-26;
signed char var_11 = (signed char)91;
int zero = 0;
signed char var_13 = (signed char)-97;
int var_14 = -1329123276;
unsigned char var_15 = (unsigned char)125;
unsigned short var_16 = (unsigned short)33607;
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
