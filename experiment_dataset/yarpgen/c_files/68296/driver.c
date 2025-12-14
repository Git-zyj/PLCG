#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1681009941;
unsigned int var_7 = 4237230547U;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 2611394627U;
int zero = 0;
int var_14 = 1198510369;
long long int var_15 = -3499331761410480570LL;
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
