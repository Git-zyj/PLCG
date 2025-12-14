#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2215562963775868702ULL;
unsigned char var_4 = (unsigned char)251;
signed char var_7 = (signed char)48;
unsigned char var_8 = (unsigned char)171;
long long int var_10 = 2633225338252780296LL;
int zero = 0;
unsigned int var_11 = 2262006918U;
long long int var_12 = -80403897828284591LL;
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
