#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13165;
short var_4 = (short)1020;
unsigned int var_5 = 3399331124U;
int var_6 = -435782077;
unsigned int var_11 = 379260758U;
signed char var_15 = (signed char)127;
unsigned short var_16 = (unsigned short)39956;
int var_17 = -256872128;
int zero = 0;
signed char var_20 = (signed char)-103;
unsigned int var_21 = 2601950287U;
unsigned short var_22 = (unsigned short)2204;
int var_23 = 588501329;
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
