#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)16;
unsigned int var_4 = 1099901019U;
int var_5 = -1662345795;
unsigned char var_6 = (unsigned char)88;
unsigned long long int var_7 = 7883864007512192035ULL;
unsigned long long int var_8 = 252442592054535792ULL;
unsigned int var_10 = 3487655222U;
unsigned long long int var_11 = 15347009681320191708ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17379631137982682668ULL;
signed char var_14 = (signed char)15;
unsigned char var_16 = (unsigned char)7;
unsigned int var_17 = 909884611U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2352260245U;
unsigned long long int var_20 = 15726493965149358326ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
