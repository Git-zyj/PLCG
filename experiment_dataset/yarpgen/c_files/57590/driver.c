#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
long long int var_3 = 4591180533371906133LL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1465881813U;
unsigned long long int var_11 = 5238511547900011852ULL;
unsigned long long int var_13 = 6160466630956084161ULL;
int zero = 0;
unsigned long long int var_14 = 1350971125993777653ULL;
long long int var_15 = 558530037792985801LL;
void init() {
}

void checksum() {
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
