#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-23;
int var_10 = -955115265;
unsigned char var_13 = (unsigned char)83;
short var_14 = (short)-13402;
int var_15 = 1860764686;
int zero = 0;
signed char var_16 = (signed char)-53;
unsigned long long int var_17 = 671333648045475099ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
