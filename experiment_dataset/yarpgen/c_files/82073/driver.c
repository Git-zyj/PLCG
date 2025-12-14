#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36900;
unsigned short var_5 = (unsigned short)58143;
unsigned short var_6 = (unsigned short)28127;
unsigned short var_11 = (unsigned short)30203;
unsigned short var_12 = (unsigned short)41065;
int zero = 0;
unsigned int var_14 = 3934966218U;
unsigned short var_15 = (unsigned short)37370;
void init() {
}

void checksum() {
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
