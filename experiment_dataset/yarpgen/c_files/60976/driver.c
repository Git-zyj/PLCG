#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)110;
long long int var_10 = -3873484853051457542LL;
short var_11 = (short)-24154;
unsigned int var_12 = 2691120529U;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -1835874943;
unsigned short var_15 = (unsigned short)24030;
unsigned long long int var_16 = 6821111649019587979ULL;
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
