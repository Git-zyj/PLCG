#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4379073472343088219LL;
short var_10 = (short)24136;
unsigned short var_12 = (unsigned short)49100;
int zero = 0;
unsigned int var_15 = 653623839U;
unsigned long long int var_16 = 10095889711781772478ULL;
void init() {
}

void checksum() {
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
