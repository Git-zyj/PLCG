#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3957188912973291641ULL;
int var_11 = -762607884;
unsigned long long int var_14 = 14636707223258036859ULL;
int zero = 0;
unsigned long long int var_16 = 5510862185342391549ULL;
unsigned short var_17 = (unsigned short)41679;
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
