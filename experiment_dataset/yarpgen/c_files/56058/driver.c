#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1268241876;
unsigned long long int var_7 = 11232912964318259009ULL;
unsigned char var_11 = (unsigned char)54;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 3509837137333685715ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)44378;
int var_21 = -229794661;
unsigned long long int var_22 = 11981532316006887913ULL;
short var_23 = (short)20100;
void init() {
}

void checksum() {
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
