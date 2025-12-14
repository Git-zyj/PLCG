#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)29;
long long int var_7 = 8794667382827425345LL;
signed char var_9 = (signed char)88;
signed char var_10 = (signed char)9;
short var_14 = (short)23531;
unsigned long long int var_17 = 12874728527871113651ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)134;
short var_19 = (short)-23179;
void init() {
}

void checksum() {
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
