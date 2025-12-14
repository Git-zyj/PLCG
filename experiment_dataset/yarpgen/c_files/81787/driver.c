#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1009582299;
int var_6 = -2122176181;
unsigned int var_11 = 2225929466U;
unsigned long long int var_14 = 11653748511686002437ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)37535;
unsigned char var_20 = (unsigned char)158;
unsigned short var_21 = (unsigned short)33414;
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
