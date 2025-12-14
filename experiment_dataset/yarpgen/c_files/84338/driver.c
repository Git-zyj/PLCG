#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 437612714U;
unsigned long long int var_4 = 14874650544529896581ULL;
short var_5 = (short)8161;
signed char var_6 = (signed char)70;
signed char var_7 = (signed char)81;
unsigned short var_8 = (unsigned short)13330;
int zero = 0;
int var_10 = 1167103445;
int var_11 = -2101055176;
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
