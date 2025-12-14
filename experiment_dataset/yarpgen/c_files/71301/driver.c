#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40409;
unsigned short var_3 = (unsigned short)30699;
int var_5 = 1596495863;
int var_6 = -1437282552;
int var_9 = 1498102227;
signed char var_10 = (signed char)114;
unsigned int var_14 = 3867364463U;
unsigned long long int var_17 = 4016270270745811142ULL;
int zero = 0;
signed char var_18 = (signed char)6;
int var_19 = -655617110;
void init() {
}

void checksum() {
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
