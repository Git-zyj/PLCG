#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3908602637U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 5109767147654813094ULL;
unsigned short var_10 = (unsigned short)11665;
int zero = 0;
unsigned int var_11 = 1604684350U;
unsigned long long int var_12 = 6398543669526949293ULL;
unsigned int var_13 = 1811152550U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
