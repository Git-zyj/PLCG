#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned short var_3 = (unsigned short)34113;
short var_8 = (short)-10582;
unsigned int var_14 = 3530728376U;
int zero = 0;
long long int var_15 = 6135810850001495447LL;
unsigned int var_16 = 2325083827U;
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
