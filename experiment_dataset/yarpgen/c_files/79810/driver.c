#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
long long int var_5 = 8207277263583017753LL;
int var_7 = 1038735839;
unsigned char var_8 = (unsigned char)192;
int zero = 0;
unsigned int var_10 = 1916133815U;
unsigned char var_11 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
