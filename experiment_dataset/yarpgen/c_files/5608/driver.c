#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
unsigned int var_1 = 1424676556U;
unsigned char var_11 = (unsigned char)234;
unsigned char var_13 = (unsigned char)210;
int zero = 0;
unsigned int var_14 = 1731557165U;
long long int var_15 = -7990129674238071795LL;
void init() {
}

void checksum() {
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
