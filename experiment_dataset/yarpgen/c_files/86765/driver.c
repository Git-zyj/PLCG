#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1713719776;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 110619726U;
int zero = 0;
unsigned int var_15 = 3170680719U;
unsigned int var_16 = 2227493970U;
long long int var_17 = 2987484232380508292LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
