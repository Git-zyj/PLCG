#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)48345;
unsigned char var_13 = (unsigned char)210;
int zero = 0;
unsigned long long int var_18 = 1485826183957667470ULL;
unsigned int var_19 = 256877075U;
unsigned short var_20 = (unsigned short)61015;
unsigned long long int var_21 = 16777937485788059470ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
