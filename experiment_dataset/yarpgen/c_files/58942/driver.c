#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3563898893231897353LL;
unsigned char var_6 = (unsigned char)252;
signed char var_7 = (signed char)-13;
short var_13 = (short)23724;
unsigned int var_14 = 3379268353U;
int zero = 0;
unsigned long long int var_16 = 2271305598024424094ULL;
signed char var_17 = (signed char)-124;
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
