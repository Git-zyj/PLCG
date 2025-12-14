#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8634;
signed char var_2 = (signed char)103;
unsigned long long int var_10 = 16290794526487867690ULL;
unsigned int var_12 = 1959399892U;
int var_13 = 894773318;
int zero = 0;
unsigned int var_14 = 4057595573U;
unsigned long long int var_15 = 15731104218841447008ULL;
long long int var_16 = -15975861662534391LL;
void init() {
}

void checksum() {
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
