#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-81;
short var_3 = (short)19121;
int var_5 = 1981276840;
unsigned int var_8 = 2027683390U;
unsigned int var_9 = 577359079U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-64;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 892378824U;
int zero = 0;
unsigned short var_16 = (unsigned short)8923;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
