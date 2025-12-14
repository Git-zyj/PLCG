#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_8 = (short)-8646;
signed char var_11 = (signed char)91;
unsigned int var_12 = 3961817350U;
int zero = 0;
unsigned long long int var_19 = 5491586259679861595ULL;
unsigned int var_20 = 2158588658U;
unsigned int var_21 = 2812218869U;
unsigned long long int var_22 = 2683790435757451551ULL;
unsigned char var_23 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
