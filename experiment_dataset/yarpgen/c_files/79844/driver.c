#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = 6471453211845327991LL;
short var_5 = (short)8843;
short var_10 = (short)-30420;
int zero = 0;
unsigned short var_14 = (unsigned short)40062;
unsigned short var_15 = (unsigned short)3720;
signed char var_16 = (signed char)-81;
short var_17 = (short)-7469;
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
