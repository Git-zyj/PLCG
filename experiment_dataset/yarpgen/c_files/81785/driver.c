#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18453;
unsigned int var_5 = 1710030445U;
unsigned long long int var_6 = 5791240634575845237ULL;
int zero = 0;
unsigned long long int var_11 = 14017710229429151824ULL;
unsigned long long int var_12 = 11687071772918342747ULL;
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
