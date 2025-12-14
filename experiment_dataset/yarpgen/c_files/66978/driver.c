#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)61;
unsigned long long int var_5 = 12167212358909464370ULL;
unsigned short var_11 = (unsigned short)8033;
int zero = 0;
unsigned long long int var_14 = 9030430015468072773ULL;
unsigned long long int var_15 = 13980028955629748859ULL;
unsigned short var_16 = (unsigned short)21793;
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
