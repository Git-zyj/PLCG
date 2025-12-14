#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)54679;
unsigned char var_10 = (unsigned char)129;
unsigned long long int var_14 = 16727003740127698603ULL;
unsigned char var_15 = (unsigned char)204;
int zero = 0;
unsigned short var_16 = (unsigned short)42137;
unsigned int var_17 = 4159631986U;
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
