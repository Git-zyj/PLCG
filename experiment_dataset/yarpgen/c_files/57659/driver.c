#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3379774307U;
int var_2 = -1191947454;
int var_4 = 964990053;
signed char var_6 = (signed char)84;
unsigned int var_7 = 2122683026U;
unsigned long long int var_8 = 2367933646820213157ULL;
unsigned long long int var_9 = 17861592901337190921ULL;
short var_10 = (short)11258;
int var_12 = 1064931804;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)240;
int zero = 0;
signed char var_15 = (signed char)-80;
unsigned short var_16 = (unsigned short)48259;
unsigned long long int var_17 = 1176920478436716511ULL;
int var_18 = -1073655727;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
