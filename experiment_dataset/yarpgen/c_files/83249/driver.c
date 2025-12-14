#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2305995183U;
unsigned long long int var_3 = 10795274874631696965ULL;
unsigned long long int var_4 = 16164467751464726111ULL;
short var_10 = (short)-15071;
unsigned long long int var_14 = 3109208737025242213ULL;
unsigned long long int var_16 = 14012959837043693068ULL;
int zero = 0;
unsigned long long int var_20 = 7137776484658961036ULL;
unsigned long long int var_21 = 105197165999392253ULL;
void init() {
}

void checksum() {
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
