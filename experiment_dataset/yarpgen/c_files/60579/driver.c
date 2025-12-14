#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1837849646124453929ULL;
signed char var_4 = (signed char)102;
int zero = 0;
unsigned short var_13 = (unsigned short)18059;
short var_14 = (short)29212;
long long int var_15 = -1899211227536003932LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
