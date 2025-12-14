#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -2008360415;
unsigned int var_13 = 2657558964U;
signed char var_14 = (signed char)106;
unsigned char var_15 = (unsigned char)214;
int zero = 0;
signed char var_16 = (signed char)48;
unsigned char var_17 = (unsigned char)178;
void init() {
}

void checksum() {
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
