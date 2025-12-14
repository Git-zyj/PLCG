#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2827938244072850171LL;
long long int var_2 = -6597948025576142385LL;
long long int var_3 = 8630526625441663352LL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 4041043487U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 31082443U;
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
