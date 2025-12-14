#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7646819053311414773LL;
long long int var_11 = -4767120915747454403LL;
int zero = 0;
unsigned short var_16 = (unsigned short)61705;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 265321616756524812ULL;
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
