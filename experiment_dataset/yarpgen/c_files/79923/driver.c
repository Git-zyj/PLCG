#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)62933;
unsigned short var_15 = (unsigned short)62949;
short var_18 = (short)-7629;
int zero = 0;
int var_20 = 698980935;
unsigned char var_21 = (unsigned char)4;
unsigned char var_22 = (unsigned char)2;
unsigned int var_23 = 2856834465U;
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
