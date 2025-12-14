#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2074641066;
signed char var_3 = (signed char)-124;
short var_5 = (short)26314;
unsigned int var_10 = 3416299400U;
signed char var_12 = (signed char)45;
unsigned long long int var_13 = 13814650191722779960ULL;
unsigned char var_14 = (unsigned char)139;
short var_15 = (short)-11307;
int zero = 0;
signed char var_16 = (signed char)122;
int var_17 = -1237225306;
int var_18 = 1940011916;
int var_19 = 1828686930;
void init() {
}

void checksum() {
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
