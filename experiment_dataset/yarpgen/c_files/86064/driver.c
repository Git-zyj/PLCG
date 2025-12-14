#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25161;
unsigned char var_4 = (unsigned char)189;
signed char var_5 = (signed char)33;
int var_7 = -1943395973;
unsigned char var_13 = (unsigned char)16;
int zero = 0;
unsigned char var_14 = (unsigned char)104;
unsigned char var_15 = (unsigned char)179;
unsigned char var_16 = (unsigned char)215;
unsigned int var_17 = 2335367855U;
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
