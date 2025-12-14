#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3796606551U;
unsigned char var_3 = (unsigned char)74;
long long int var_7 = 2804675666132356850LL;
int var_10 = 366394056;
int zero = 0;
short var_11 = (short)31460;
unsigned long long int var_12 = 14472671245246938597ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
