#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1342527360235712622LL;
unsigned int var_3 = 3769299113U;
_Bool var_4 = (_Bool)0;
int var_5 = -1976826978;
unsigned int var_7 = 1775497241U;
int var_8 = 2101869419;
int var_9 = -825020383;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1802363876U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
short var_17 = (short)28213;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
