#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45345;
short var_6 = (short)-23351;
unsigned long long int var_15 = 11943142774756318571ULL;
int zero = 0;
short var_16 = (short)-2425;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)25;
unsigned long long int var_19 = 1855398402709756236ULL;
unsigned int var_20 = 197906520U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
