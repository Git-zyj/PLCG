#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 778645594U;
int var_12 = 1857352645;
unsigned int var_13 = 846272410U;
int zero = 0;
unsigned long long int var_16 = 6078332047672713586ULL;
unsigned long long int var_17 = 381754246159156460ULL;
signed char var_18 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
