#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15295674265581402837ULL;
signed char var_8 = (signed char)-122;
signed char var_10 = (signed char)19;
int zero = 0;
unsigned long long int var_17 = 18227201635177441863ULL;
long long int var_18 = 3120626493661855600LL;
void init() {
}

void checksum() {
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
