#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1179567708U;
short var_6 = (short)-14067;
unsigned char var_10 = (unsigned char)14;
signed char var_13 = (signed char)54;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2236808872U;
int zero = 0;
signed char var_19 = (signed char)-65;
unsigned char var_20 = (unsigned char)233;
unsigned int var_21 = 641209773U;
unsigned int var_22 = 2746897564U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
