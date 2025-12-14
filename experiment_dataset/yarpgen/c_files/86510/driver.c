#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2516505669U;
long long int var_9 = -2046732755312120927LL;
unsigned char var_11 = (unsigned char)116;
unsigned int var_12 = 2640393161U;
unsigned char var_13 = (unsigned char)92;
int zero = 0;
unsigned char var_14 = (unsigned char)248;
unsigned char var_15 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
