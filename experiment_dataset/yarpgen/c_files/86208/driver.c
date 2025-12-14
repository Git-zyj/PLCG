#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3965190894U;
unsigned short var_4 = (unsigned short)44558;
int var_7 = 1732321908;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)20577;
unsigned long long int var_13 = 10795258510174564995ULL;
int zero = 0;
unsigned int var_14 = 3734857090U;
short var_15 = (short)25004;
int var_16 = -658877017;
signed char var_17 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
