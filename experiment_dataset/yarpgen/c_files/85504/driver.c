#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2837607137U;
unsigned char var_3 = (unsigned char)206;
unsigned short var_7 = (unsigned short)24423;
short var_10 = (short)-3933;
int zero = 0;
unsigned char var_13 = (unsigned char)41;
unsigned char var_14 = (unsigned char)83;
void init() {
}

void checksum() {
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
