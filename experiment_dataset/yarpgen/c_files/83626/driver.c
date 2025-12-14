#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2101718640;
signed char var_3 = (signed char)-12;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-22006;
unsigned int var_12 = 1936608183U;
int zero = 0;
int var_16 = -984713004;
unsigned int var_17 = 1800293367U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
