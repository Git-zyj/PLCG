#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_14 = -347918105;
unsigned char var_15 = (unsigned char)198;
unsigned int var_16 = 2438922832U;
short var_17 = (short)13532;
int zero = 0;
int var_18 = 1615152951;
unsigned short var_19 = (unsigned short)45377;
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
