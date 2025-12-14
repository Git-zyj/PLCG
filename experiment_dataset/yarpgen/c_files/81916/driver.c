#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3825597092862240681LL;
signed char var_3 = (signed char)-56;
long long int var_4 = -2761587261998151143LL;
long long int var_18 = -684686971014922021LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -551969665;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
