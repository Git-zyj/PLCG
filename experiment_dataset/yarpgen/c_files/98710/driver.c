#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3687965542660789430ULL;
unsigned long long int var_4 = 11703193569284209801ULL;
int zero = 0;
long long int var_10 = 6171448056482444025LL;
long long int var_11 = -8271153984646705243LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 4115621909714526333ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
