#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)32721;
signed char var_5 = (signed char)2;
short var_6 = (short)9466;
int var_8 = -1835318298;
short var_13 = (short)-7213;
short var_14 = (short)115;
int zero = 0;
signed char var_15 = (signed char)-21;
short var_16 = (short)-8143;
short var_17 = (short)13738;
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
