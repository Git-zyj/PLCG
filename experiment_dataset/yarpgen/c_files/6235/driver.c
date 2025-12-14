#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1006367289;
short var_2 = (short)-23126;
unsigned int var_3 = 1376568125U;
long long int var_5 = -964092697287948368LL;
int var_6 = 1085044117;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 1643001361U;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-2512;
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
