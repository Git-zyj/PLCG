#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)62;
unsigned char var_2 = (unsigned char)148;
unsigned char var_7 = (unsigned char)109;
int zero = 0;
unsigned int var_11 = 1770579401U;
unsigned short var_12 = (unsigned short)16148;
int var_13 = -2124181730;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
