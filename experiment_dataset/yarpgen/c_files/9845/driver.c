#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1634865314;
int var_6 = 991565697;
unsigned char var_12 = (unsigned char)86;
long long int var_14 = -6000740516781171647LL;
int zero = 0;
signed char var_16 = (signed char)22;
unsigned short var_17 = (unsigned short)61146;
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
