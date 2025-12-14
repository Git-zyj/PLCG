#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
unsigned char var_1 = (unsigned char)20;
int var_4 = 700588386;
unsigned int var_7 = 3175136294U;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)222;
int zero = 0;
short var_12 = (short)-31644;
int var_13 = -795113401;
short var_14 = (short)-22022;
unsigned int var_15 = 3698790088U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
