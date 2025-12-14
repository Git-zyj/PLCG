#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 202794511U;
signed char var_8 = (signed char)72;
int var_9 = 2135003987;
long long int var_11 = 791610298996533193LL;
int zero = 0;
unsigned char var_16 = (unsigned char)21;
unsigned char var_17 = (unsigned char)248;
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
