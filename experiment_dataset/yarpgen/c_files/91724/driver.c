#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3149435582633214002ULL;
signed char var_1 = (signed char)-98;
unsigned long long int var_2 = 10938003800642378309ULL;
int var_5 = 1834395273;
int var_8 = -870551476;
int zero = 0;
unsigned int var_10 = 1985321527U;
int var_11 = -1776480235;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
