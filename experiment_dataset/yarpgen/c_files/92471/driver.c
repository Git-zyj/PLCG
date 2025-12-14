#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1999834751;
unsigned long long int var_11 = 18302403333431769073ULL;
int var_12 = 1928503294;
int zero = 0;
signed char var_14 = (signed char)-115;
long long int var_15 = 1663834423380662844LL;
int var_16 = 208444088;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
