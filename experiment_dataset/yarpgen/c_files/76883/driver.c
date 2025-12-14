#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4128047871801726114LL;
signed char var_3 = (signed char)-51;
unsigned int var_4 = 4229886376U;
unsigned int var_7 = 1917200765U;
int var_10 = -1279217762;
short var_11 = (short)19664;
int var_12 = 759684916;
int zero = 0;
short var_13 = (short)5099;
int var_14 = 1639230092;
void init() {
}

void checksum() {
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
