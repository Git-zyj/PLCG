#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1004971755U;
unsigned short var_13 = (unsigned short)64464;
unsigned char var_15 = (unsigned char)0;
int zero = 0;
unsigned char var_16 = (unsigned char)191;
unsigned short var_17 = (unsigned short)14168;
int var_18 = -1836741658;
void init() {
}

void checksum() {
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
