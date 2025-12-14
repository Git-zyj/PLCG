#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4116117928U;
long long int var_6 = 980519736524179344LL;
unsigned long long int var_7 = 8401644699388800816ULL;
unsigned int var_8 = 42725915U;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)39294;
long long int var_13 = -640978172108030413LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 244361811U;
unsigned int var_17 = 587789868U;
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
