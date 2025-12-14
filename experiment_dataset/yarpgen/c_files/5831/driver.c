#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9442;
signed char var_2 = (signed char)-38;
short var_5 = (short)-14977;
signed char var_6 = (signed char)-42;
short var_7 = (short)13085;
short var_13 = (short)24735;
int zero = 0;
long long int var_17 = 4970735517664527125LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
