#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)300;
unsigned char var_4 = (unsigned char)161;
unsigned char var_6 = (unsigned char)69;
unsigned short var_7 = (unsigned short)65080;
int var_10 = -890014275;
short var_13 = (short)29052;
unsigned int var_16 = 3464795140U;
int var_17 = -1408194319;
int zero = 0;
unsigned short var_18 = (unsigned short)48776;
unsigned int var_19 = 1276164589U;
void init() {
}

void checksum() {
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
