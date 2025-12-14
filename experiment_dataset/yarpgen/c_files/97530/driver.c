#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2073152760;
unsigned long long int var_2 = 3264458692065214931ULL;
long long int var_3 = -4939468320827396355LL;
unsigned int var_4 = 289040207U;
unsigned short var_8 = (unsigned short)45653;
int zero = 0;
int var_14 = -365269344;
unsigned int var_15 = 2259582570U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
