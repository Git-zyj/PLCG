#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4287754204094350791LL;
signed char var_6 = (signed char)-92;
int var_10 = 2130952984;
long long int var_11 = -7437677617813126232LL;
int zero = 0;
unsigned int var_12 = 1091784338U;
long long int var_13 = -2635257208071238419LL;
void init() {
}

void checksum() {
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
