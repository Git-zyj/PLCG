#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2523359181U;
unsigned long long int var_5 = 4757840892413582043ULL;
int var_10 = -1091887023;
signed char var_11 = (signed char)99;
int zero = 0;
int var_13 = 1932310094;
unsigned char var_14 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
