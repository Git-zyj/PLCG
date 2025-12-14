#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
unsigned int var_2 = 4109899563U;
unsigned char var_6 = (unsigned char)132;
unsigned int var_8 = 3112877608U;
unsigned int var_9 = 2240818922U;
int zero = 0;
unsigned short var_15 = (unsigned short)16228;
unsigned int var_16 = 1147758681U;
void init() {
}

void checksum() {
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
