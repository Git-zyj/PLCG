#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1443413998;
unsigned long long int var_4 = 11009117892705785867ULL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 10393879105823086040ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
