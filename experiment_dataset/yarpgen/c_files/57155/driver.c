#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8728280872444109653LL;
unsigned long long int var_5 = 852043426253808229ULL;
int zero = 0;
long long int var_13 = -5826457588665630293LL;
unsigned short var_14 = (unsigned short)30920;
signed char var_15 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
