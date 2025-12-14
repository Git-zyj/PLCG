#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3786576561U;
unsigned long long int var_5 = 5372925406280654007ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 2775556847888109252ULL;
unsigned int var_13 = 1759664641U;
unsigned int var_14 = 2705287591U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
