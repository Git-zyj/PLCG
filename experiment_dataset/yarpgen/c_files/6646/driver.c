#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1371699669;
unsigned int var_3 = 3591087443U;
unsigned int var_12 = 2020892147U;
int var_14 = 1489385381;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 869510921U;
unsigned long long int var_20 = 10538416440644381732ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
