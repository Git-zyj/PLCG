#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1582997418U;
unsigned long long int var_5 = 994042227070991639ULL;
int zero = 0;
short var_13 = (short)-10072;
int var_14 = 724547541;
signed char var_15 = (signed char)-116;
unsigned long long int var_16 = 16989288439037415826ULL;
unsigned long long int var_17 = 13187354172480794875ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
