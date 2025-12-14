#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1335749275U;
unsigned int var_4 = 3246061395U;
unsigned int var_6 = 3141736523U;
unsigned int var_11 = 1624055564U;
unsigned int var_12 = 834694830U;
unsigned int var_13 = 3676648050U;
int zero = 0;
unsigned int var_17 = 1377320350U;
unsigned int var_18 = 1466266259U;
unsigned int var_19 = 1604583091U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
