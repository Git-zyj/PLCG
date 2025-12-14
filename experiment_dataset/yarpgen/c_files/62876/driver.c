#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5236;
short var_1 = (short)32072;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 37367101U;
unsigned long long int var_4 = 10312853077134447749ULL;
long long int var_5 = -3588090720628637517LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)54141;
int zero = 0;
unsigned int var_10 = 694076865U;
signed char var_11 = (signed char)6;
unsigned int var_12 = 734211754U;
short var_13 = (short)-20796;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
