#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
int var_11 = 1108200731;
unsigned long long int var_12 = 15595379768089339275ULL;
int zero = 0;
unsigned int var_15 = 1128550081U;
short var_16 = (short)12208;
long long int var_17 = -6140488697549928154LL;
int var_18 = -1047367099;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
