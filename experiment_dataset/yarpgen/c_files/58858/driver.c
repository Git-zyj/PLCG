#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7532027888250780714LL;
long long int var_6 = -722213543111315798LL;
unsigned int var_12 = 2691643030U;
int zero = 0;
long long int var_14 = 5432124840216073020LL;
long long int var_15 = 7182256780570409116LL;
long long int var_16 = 4102912056370311894LL;
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
