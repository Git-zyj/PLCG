#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3918473219679128076LL;
unsigned short var_6 = (unsigned short)24520;
signed char var_12 = (signed char)2;
long long int var_13 = 76263966230387439LL;
int zero = 0;
unsigned long long int var_19 = 3899908984280044117ULL;
unsigned short var_20 = (unsigned short)20405;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
