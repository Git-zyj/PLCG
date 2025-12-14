#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27073;
signed char var_12 = (signed char)43;
int zero = 0;
signed char var_17 = (signed char)-92;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 1992715633962300537ULL;
short var_20 = (short)30991;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
