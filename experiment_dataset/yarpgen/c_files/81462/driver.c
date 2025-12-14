#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_6 = -6299227913273122730LL;
long long int var_7 = -4852344268526643853LL;
short var_8 = (short)-14535;
short var_10 = (short)31304;
long long int var_11 = -9150286237198006712LL;
unsigned int var_12 = 948858777U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 403392606U;
unsigned long long int var_18 = 15663689597333262746ULL;
int var_19 = -647822749;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
