#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2985710004U;
unsigned char var_5 = (unsigned char)93;
unsigned int var_10 = 2201522446U;
signed char var_11 = (signed char)12;
short var_13 = (short)1780;
unsigned short var_14 = (unsigned short)4907;
int zero = 0;
unsigned short var_17 = (unsigned short)42194;
unsigned int var_18 = 1405454215U;
unsigned int var_19 = 232703643U;
short var_20 = (short)-23334;
short var_21 = (short)23091;
unsigned long long int var_22 = 15179208958213484345ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
