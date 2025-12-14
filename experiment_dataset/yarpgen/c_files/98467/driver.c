#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2479186023U;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2256020227U;
int var_4 = 167701206;
long long int var_5 = -5722490531639115950LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 2330250160296515663ULL;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -3372314166716502203LL;
long long int var_20 = -8764627298940708340LL;
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
