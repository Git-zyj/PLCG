#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28527;
unsigned long long int var_2 = 14481747963273304045ULL;
unsigned int var_7 = 2884151469U;
int zero = 0;
unsigned long long int var_13 = 15435935582058883807ULL;
short var_14 = (short)-29256;
long long int var_15 = -8050024934871909021LL;
long long int var_16 = 5394121095990000015LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
