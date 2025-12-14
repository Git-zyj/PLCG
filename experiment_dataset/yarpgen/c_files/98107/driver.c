#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 362173700771791675LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2293328341U;
signed char var_5 = (signed char)-25;
long long int var_8 = 2132240677145157796LL;
unsigned int var_10 = 920368501U;
long long int var_11 = 894239046528483509LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 7407284875859202358LL;
unsigned long long int var_14 = 9257037548297529808ULL;
_Bool var_15 = (_Bool)1;
int var_16 = -823823893;
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
