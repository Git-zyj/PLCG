#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2094200311U;
unsigned short var_13 = (unsigned short)9717;
unsigned int var_18 = 1807031937U;
int zero = 0;
unsigned short var_19 = (unsigned short)18604;
short var_20 = (short)-22606;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
