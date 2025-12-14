#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2052229909U;
unsigned short var_11 = (unsigned short)24619;
unsigned short var_12 = (unsigned short)37919;
unsigned int var_14 = 955715958U;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
int var_20 = -537015533;
short var_21 = (short)-12399;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
