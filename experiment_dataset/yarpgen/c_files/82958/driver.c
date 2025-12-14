#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)213;
unsigned long long int var_6 = 11906982051007062729ULL;
unsigned short var_10 = (unsigned short)33268;
unsigned short var_12 = (unsigned short)16793;
int zero = 0;
unsigned char var_14 = (unsigned char)85;
unsigned char var_15 = (unsigned char)33;
signed char var_16 = (signed char)95;
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
