#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_8 = (unsigned short)64416;
unsigned long long int var_10 = 8342463571097383819ULL;
unsigned short var_11 = (unsigned short)1904;
int zero = 0;
int var_17 = 93800942;
short var_18 = (short)-11396;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
