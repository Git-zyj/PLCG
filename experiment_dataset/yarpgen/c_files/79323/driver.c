#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7857;
signed char var_2 = (signed char)28;
unsigned short var_4 = (unsigned short)18808;
short var_6 = (short)-23923;
unsigned long long int var_12 = 6432696020471589097ULL;
unsigned short var_14 = (unsigned short)48657;
unsigned long long int var_16 = 2073404850051024641ULL;
unsigned long long int var_18 = 11003350733476081968ULL;
int zero = 0;
unsigned long long int var_19 = 11674685949133831992ULL;
unsigned int var_20 = 3593167342U;
unsigned char var_21 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
