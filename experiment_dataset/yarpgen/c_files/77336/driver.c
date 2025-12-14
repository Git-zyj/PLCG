#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24646;
unsigned long long int var_7 = 2256068860865620836ULL;
int var_13 = -695661564;
int var_14 = -1301862216;
unsigned char var_17 = (unsigned char)203;
int zero = 0;
unsigned long long int var_19 = 12912850119390390570ULL;
unsigned long long int var_20 = 3290626826283950842ULL;
unsigned char var_21 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
