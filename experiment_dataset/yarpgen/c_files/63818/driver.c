#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1604905185;
unsigned int var_5 = 2086849828U;
short var_6 = (short)9667;
long long int var_8 = -1341919595989557505LL;
unsigned short var_11 = (unsigned short)29465;
unsigned short var_12 = (unsigned short)12976;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)25600;
short var_16 = (short)4146;
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
