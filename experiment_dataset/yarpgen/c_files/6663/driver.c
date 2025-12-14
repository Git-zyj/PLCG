#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23581;
long long int var_6 = -5666817418181997781LL;
unsigned char var_8 = (unsigned char)248;
int zero = 0;
unsigned short var_12 = (unsigned short)24551;
unsigned int var_13 = 1816773501U;
void init() {
}

void checksum() {
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
