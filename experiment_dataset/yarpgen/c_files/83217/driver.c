#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55901;
unsigned short var_14 = (unsigned short)23061;
int zero = 0;
unsigned short var_15 = (unsigned short)58537;
long long int var_16 = -213474398810510613LL;
long long int var_17 = -2532485665706051317LL;
unsigned short var_18 = (unsigned short)43956;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
