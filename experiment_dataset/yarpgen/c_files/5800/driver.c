#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 590066162U;
unsigned char var_6 = (unsigned char)51;
int var_7 = -253786279;
unsigned long long int var_8 = 9916176939145752927ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1599398241U;
int zero = 0;
unsigned int var_15 = 2341000353U;
unsigned int var_16 = 843236532U;
int var_17 = 1450263677;
unsigned short var_18 = (unsigned short)18914;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
