#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -282035454;
unsigned short var_8 = (unsigned short)1778;
unsigned int var_10 = 175227803U;
unsigned short var_11 = (unsigned short)37857;
int zero = 0;
unsigned long long int var_14 = 6899441329671713871ULL;
signed char var_15 = (signed char)98;
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
