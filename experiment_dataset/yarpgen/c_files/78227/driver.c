#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62802;
unsigned short var_8 = (unsigned short)921;
int var_11 = 1410431455;
unsigned int var_13 = 4283228972U;
signed char var_14 = (signed char)74;
signed char var_16 = (signed char)-70;
int zero = 0;
int var_17 = 245570323;
short var_18 = (short)-11312;
void init() {
}

void checksum() {
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
