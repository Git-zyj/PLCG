#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)81;
unsigned int var_10 = 92533666U;
unsigned long long int var_11 = 18362142384018431948ULL;
short var_12 = (short)21233;
int zero = 0;
long long int var_14 = 793033703732051583LL;
short var_15 = (short)889;
short var_16 = (short)-21425;
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
