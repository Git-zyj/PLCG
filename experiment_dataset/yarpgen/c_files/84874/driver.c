#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 653018692;
int var_5 = -708334013;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 1022394527;
int var_13 = 1990063919;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -153019595;
void init() {
}

void checksum() {
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
