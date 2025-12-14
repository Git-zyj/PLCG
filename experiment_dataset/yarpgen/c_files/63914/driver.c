#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 360981497;
_Bool var_1 = (_Bool)0;
int var_3 = -1525782045;
signed char var_4 = (signed char)102;
_Bool var_5 = (_Bool)0;
int var_8 = 1506127660;
int var_12 = 1169636846;
unsigned int var_13 = 2200994057U;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)24723;
unsigned short var_16 = (unsigned short)8768;
void init() {
}

void checksum() {
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
