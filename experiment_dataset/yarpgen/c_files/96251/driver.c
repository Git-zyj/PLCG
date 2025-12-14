#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2258087955076008039LL;
unsigned long long int var_5 = 16008495541133773941ULL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)102;
int zero = 0;
unsigned int var_13 = 2124214668U;
unsigned int var_14 = 3272129617U;
int var_15 = 475476751;
void init() {
}

void checksum() {
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
