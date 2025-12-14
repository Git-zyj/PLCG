#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2812091037U;
int var_8 = -460628291;
signed char var_13 = (signed char)11;
unsigned int var_15 = 2699623960U;
int zero = 0;
int var_16 = 1359306672;
short var_17 = (short)-2529;
unsigned int var_18 = 2421298136U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
