#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33862;
unsigned char var_3 = (unsigned char)5;
unsigned char var_5 = (unsigned char)184;
signed char var_8 = (signed char)86;
short var_12 = (short)29208;
int zero = 0;
int var_15 = -1303344839;
unsigned char var_16 = (unsigned char)140;
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
