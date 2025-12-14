#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)18624;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_13 = (unsigned short)33233;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -977551205;
short var_16 = (short)-16506;
unsigned short var_17 = (unsigned short)49705;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
