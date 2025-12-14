#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1782350778;
unsigned char var_1 = (unsigned char)173;
int var_4 = -29269034;
unsigned char var_5 = (unsigned char)243;
int zero = 0;
unsigned int var_11 = 2730590086U;
unsigned int var_12 = 1919051193U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
