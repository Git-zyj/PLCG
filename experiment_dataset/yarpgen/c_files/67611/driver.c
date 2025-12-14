#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4035908532U;
signed char var_6 = (signed char)-40;
long long int var_9 = 5859164453141596128LL;
int zero = 0;
unsigned long long int var_10 = 10341973343136409380ULL;
signed char var_11 = (signed char)-39;
long long int var_12 = -8135625550593991209LL;
unsigned short var_13 = (unsigned short)64751;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
