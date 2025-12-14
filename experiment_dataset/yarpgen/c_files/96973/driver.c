#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1776316412U;
unsigned int var_5 = 2920194775U;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1090002962284202113LL;
int zero = 0;
unsigned short var_14 = (unsigned short)52861;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
