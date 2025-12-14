#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -765612320;
unsigned char var_7 = (unsigned char)212;
unsigned short var_10 = (unsigned short)47743;
unsigned char var_12 = (unsigned char)140;
int zero = 0;
unsigned short var_15 = (unsigned short)45384;
int var_16 = -163919943;
unsigned int var_17 = 3046736497U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
