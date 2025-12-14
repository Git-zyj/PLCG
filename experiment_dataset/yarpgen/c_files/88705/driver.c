#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3184739876452228481LL;
unsigned char var_8 = (unsigned char)124;
int var_13 = -213617372;
int zero = 0;
unsigned int var_14 = 1403649681U;
unsigned long long int var_15 = 9274819910905811885ULL;
void init() {
}

void checksum() {
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
