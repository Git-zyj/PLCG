#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)19417;
unsigned char var_3 = (unsigned char)255;
unsigned int var_5 = 759151010U;
unsigned int var_7 = 2859551399U;
short var_8 = (short)-28090;
unsigned char var_9 = (unsigned char)122;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
unsigned char var_13 = (unsigned char)33;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)218;
void init() {
}

void checksum() {
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
