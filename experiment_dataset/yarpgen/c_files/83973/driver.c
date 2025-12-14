#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1402;
unsigned char var_8 = (unsigned char)65;
int zero = 0;
unsigned short var_13 = (unsigned short)43762;
signed char var_14 = (signed char)126;
unsigned int var_15 = 3647527294U;
unsigned char var_16 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
