#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1822238762;
short var_6 = (short)30125;
short var_8 = (short)6826;
int zero = 0;
short var_10 = (short)-3136;
short var_11 = (short)-32755;
_Bool var_12 = (_Bool)0;
short var_13 = (short)24582;
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
