#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1301817693U;
long long int var_4 = -8984419738428527719LL;
short var_10 = (short)-5765;
int zero = 0;
unsigned char var_15 = (unsigned char)95;
unsigned char var_16 = (unsigned char)147;
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
