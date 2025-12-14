#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2585147540U;
unsigned char var_1 = (unsigned char)137;
unsigned char var_2 = (unsigned char)213;
unsigned int var_5 = 1588188756U;
unsigned int var_6 = 1769689625U;
unsigned short var_7 = (unsigned short)33223;
unsigned char var_8 = (unsigned char)158;
unsigned int var_10 = 1262439137U;
unsigned char var_13 = (unsigned char)99;
unsigned int var_16 = 876450955U;
unsigned char var_19 = (unsigned char)189;
int zero = 0;
unsigned char var_20 = (unsigned char)187;
unsigned short var_21 = (unsigned short)23744;
unsigned char var_22 = (unsigned char)253;
unsigned int var_23 = 2588940384U;
unsigned char var_24 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
