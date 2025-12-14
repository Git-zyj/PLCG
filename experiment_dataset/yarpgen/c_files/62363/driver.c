#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11896;
unsigned long long int var_5 = 11145711838260576753ULL;
unsigned int var_7 = 2843618486U;
long long int var_10 = -451033920771245490LL;
unsigned int var_13 = 3271876972U;
short var_14 = (short)6743;
int zero = 0;
unsigned int var_17 = 3079366533U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
