#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3802751386319178995ULL;
long long int var_6 = -7092608584445905057LL;
signed char var_7 = (signed char)118;
signed char var_11 = (signed char)125;
int zero = 0;
short var_12 = (short)17943;
int var_13 = 282211764;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
