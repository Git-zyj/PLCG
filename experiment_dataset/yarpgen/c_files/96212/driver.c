#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3264926700U;
unsigned int var_7 = 599967032U;
unsigned char var_11 = (unsigned char)213;
int zero = 0;
unsigned short var_14 = (unsigned short)42230;
unsigned int var_15 = 2598004675U;
signed char var_16 = (signed char)-80;
void init() {
}

void checksum() {
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
