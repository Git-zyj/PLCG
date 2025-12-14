#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1517808743;
unsigned char var_3 = (unsigned char)137;
unsigned int var_6 = 2801560278U;
int var_7 = 269905339;
unsigned int var_8 = 1581538937U;
short var_10 = (short)-22526;
long long int var_12 = -4470509011608962160LL;
unsigned short var_13 = (unsigned short)52123;
unsigned long long int var_14 = 15004483330179213873ULL;
int zero = 0;
unsigned int var_15 = 3485361640U;
long long int var_16 = -5300170492286551799LL;
unsigned char var_17 = (unsigned char)75;
unsigned int var_18 = 2264515983U;
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
