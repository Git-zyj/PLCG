#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 209099954;
unsigned char var_7 = (unsigned char)224;
signed char var_8 = (signed char)110;
unsigned char var_11 = (unsigned char)231;
long long int var_12 = -8770499770825366828LL;
int var_13 = -668206877;
unsigned int var_14 = 1992478617U;
short var_15 = (short)19672;
long long int var_16 = 9203887365234764992LL;
int zero = 0;
long long int var_19 = 2280467771605504330LL;
short var_20 = (short)-22354;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
