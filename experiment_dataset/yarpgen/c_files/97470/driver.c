#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -61740702;
unsigned int var_5 = 283600292U;
int var_6 = -2115039496;
long long int var_11 = -6783468261838873107LL;
int zero = 0;
unsigned long long int var_13 = 14172494331368989143ULL;
unsigned int var_14 = 2848770514U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
