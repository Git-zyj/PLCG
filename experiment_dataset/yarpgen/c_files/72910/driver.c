#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 794034478U;
unsigned int var_5 = 3609221512U;
unsigned long long int var_6 = 9790400247810316218ULL;
int var_9 = 960034969;
unsigned int var_10 = 847339608U;
signed char var_13 = (signed char)-91;
unsigned char var_14 = (unsigned char)111;
unsigned long long int var_16 = 11940631763689648132ULL;
int zero = 0;
signed char var_17 = (signed char)-25;
int var_18 = 373012228;
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
