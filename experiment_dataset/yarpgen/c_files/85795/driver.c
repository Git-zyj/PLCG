#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2557465373U;
unsigned short var_4 = (unsigned short)21146;
int zero = 0;
unsigned char var_12 = (unsigned char)73;
unsigned char var_13 = (unsigned char)51;
long long int var_14 = 1180659870168116432LL;
int var_15 = -237739028;
long long int var_16 = -7627261309067110461LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
