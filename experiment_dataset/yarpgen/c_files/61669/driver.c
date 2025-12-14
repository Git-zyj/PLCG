#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2157810364U;
unsigned int var_2 = 2732580933U;
int var_13 = -1416896952;
int zero = 0;
unsigned char var_14 = (unsigned char)61;
signed char var_15 = (signed char)107;
unsigned int var_16 = 1340923897U;
signed char var_17 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
