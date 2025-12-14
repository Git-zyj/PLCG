#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 855651796;
int var_4 = 574531564;
int zero = 0;
unsigned int var_10 = 1033485806U;
unsigned short var_11 = (unsigned short)46722;
signed char var_12 = (signed char)81;
unsigned short var_13 = (unsigned short)44487;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
