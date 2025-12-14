#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10670603101780767030ULL;
unsigned char var_4 = (unsigned char)107;
unsigned char var_9 = (unsigned char)242;
int zero = 0;
long long int var_10 = -8470551428780134925LL;
unsigned char var_11 = (unsigned char)213;
unsigned int var_12 = 381096851U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
