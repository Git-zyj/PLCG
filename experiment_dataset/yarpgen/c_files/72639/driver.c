#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int var_10 = -726251148;
unsigned int var_12 = 127263760U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)74;
unsigned int var_18 = 2043276313U;
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
