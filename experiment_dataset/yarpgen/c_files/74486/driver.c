#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1995786173;
long long int var_7 = -1529608178882836025LL;
short var_15 = (short)-29535;
int zero = 0;
signed char var_17 = (signed char)99;
unsigned short var_18 = (unsigned short)3547;
long long int var_19 = 4615128685085139128LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
