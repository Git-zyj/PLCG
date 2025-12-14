#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 101530395;
short var_8 = (short)-30689;
unsigned int var_11 = 1845559106U;
signed char var_13 = (signed char)-50;
short var_14 = (short)-32589;
int zero = 0;
int var_15 = 2015276798;
unsigned int var_16 = 2218837974U;
int var_17 = -986472852;
short var_18 = (short)8813;
unsigned short var_19 = (unsigned short)49394;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
