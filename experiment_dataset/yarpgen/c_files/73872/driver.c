#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2307397167U;
unsigned int var_6 = 3948518268U;
int var_8 = 278919043;
unsigned short var_9 = (unsigned short)3385;
unsigned int var_14 = 650227144U;
unsigned short var_16 = (unsigned short)33925;
int zero = 0;
unsigned char var_17 = (unsigned char)11;
unsigned int var_18 = 1024554467U;
unsigned short var_19 = (unsigned short)60348;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
