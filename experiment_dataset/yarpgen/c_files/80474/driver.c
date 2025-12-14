#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 355823231;
unsigned long long int var_3 = 9469888782197949097ULL;
long long int var_8 = -5211438965156316933LL;
int zero = 0;
unsigned char var_11 = (unsigned char)229;
unsigned int var_12 = 1221043054U;
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
