#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4114;
unsigned short var_2 = (unsigned short)7819;
unsigned short var_5 = (unsigned short)30396;
unsigned short var_6 = (unsigned short)11141;
unsigned short var_7 = (unsigned short)55931;
unsigned short var_10 = (unsigned short)1651;
int zero = 0;
unsigned short var_12 = (unsigned short)11130;
unsigned short var_13 = (unsigned short)8954;
unsigned short var_14 = (unsigned short)55053;
unsigned short var_15 = (unsigned short)35773;
unsigned short var_16 = (unsigned short)54538;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
