#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)136;
unsigned int var_9 = 3662726583U;
unsigned int var_10 = 2753486444U;
int zero = 0;
unsigned short var_11 = (unsigned short)17736;
int var_12 = 65428080;
int var_13 = -1903220949;
unsigned char var_14 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
