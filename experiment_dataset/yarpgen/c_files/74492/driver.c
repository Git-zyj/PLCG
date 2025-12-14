#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3618589620834559442LL;
int var_4 = -839748642;
_Bool var_6 = (_Bool)0;
long long int var_11 = -6529146079932066598LL;
unsigned int var_13 = 786907232U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-22;
unsigned int var_16 = 3673683768U;
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
