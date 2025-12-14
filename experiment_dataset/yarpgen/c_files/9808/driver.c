#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1539271192060434136LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 11592898305561189763ULL;
unsigned long long int var_13 = 11861356601023360146ULL;
signed char var_14 = (signed char)-97;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
