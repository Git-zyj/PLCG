#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -957501768;
short var_1 = (short)-23224;
long long int var_3 = -6187564400210186829LL;
unsigned int var_4 = 2123649765U;
int var_6 = -2056727053;
int zero = 0;
long long int var_14 = 2759987486060699546LL;
unsigned short var_15 = (unsigned short)35339;
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
