#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53793;
unsigned int var_3 = 3272379297U;
short var_8 = (short)6207;
int zero = 0;
unsigned short var_11 = (unsigned short)44894;
signed char var_12 = (signed char)-97;
unsigned long long int var_13 = 1159836258062081765ULL;
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
