#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 4369120850445607238LL;
long long int var_7 = 4219941002326762756LL;
signed char var_9 = (signed char)22;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3572395885418503302LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1809646301050703291LL;
unsigned char var_16 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
