#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10257;
unsigned short var_1 = (unsigned short)10425;
unsigned short var_2 = (unsigned short)39179;
unsigned short var_9 = (unsigned short)6466;
unsigned short var_12 = (unsigned short)64941;
int zero = 0;
unsigned short var_13 = (unsigned short)61024;
unsigned short var_14 = (unsigned short)42589;
unsigned short var_15 = (unsigned short)56786;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
