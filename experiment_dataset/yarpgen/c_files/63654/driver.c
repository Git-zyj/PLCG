#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 1881053266876330150LL;
int zero = 0;
unsigned int var_20 = 2728763001U;
int var_21 = 1901112752;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
long long int var_24 = 9106515865564491786LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
