#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
int var_3 = -1226510634;
unsigned short var_6 = (unsigned short)61453;
int var_7 = 607455959;
unsigned long long int var_8 = 1714562985248239356ULL;
int var_11 = -2071400085;
unsigned long long int var_13 = 18360307512093467244ULL;
int zero = 0;
signed char var_14 = (signed char)6;
short var_15 = (short)-11103;
unsigned int var_16 = 3802341798U;
unsigned long long int var_17 = 15553485917858257112ULL;
unsigned long long int var_18 = 4784379299685671134ULL;
int var_19 = -1548658257;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
