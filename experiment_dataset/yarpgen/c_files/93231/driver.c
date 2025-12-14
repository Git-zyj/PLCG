#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3059689153U;
unsigned long long int var_7 = 13346267575209124694ULL;
unsigned int var_8 = 3810743056U;
int var_9 = -1070308691;
unsigned int var_11 = 991245355U;
_Bool var_12 = (_Bool)1;
int var_13 = 1012121930;
long long int var_15 = -6885706606495207049LL;
int zero = 0;
long long int var_16 = -3231254858332937325LL;
int var_17 = -1013648401;
short var_18 = (short)21930;
unsigned int var_19 = 642622581U;
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
