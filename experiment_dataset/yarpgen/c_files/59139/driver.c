#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 334639095U;
unsigned int var_5 = 1568513463U;
unsigned int var_7 = 1463226499U;
unsigned long long int var_9 = 4679386300049902739ULL;
unsigned int var_11 = 3323034461U;
unsigned char var_13 = (unsigned char)249;
int zero = 0;
unsigned int var_14 = 3624157468U;
short var_15 = (short)-16443;
unsigned char var_16 = (unsigned char)239;
unsigned long long int var_17 = 9083400641668983531ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
