#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1822761732U;
unsigned long long int var_6 = 7300761692466187240ULL;
signed char var_8 = (signed char)105;
unsigned long long int var_11 = 11109209978303164906ULL;
int zero = 0;
unsigned int var_14 = 1443657389U;
int var_15 = 446506928;
int var_16 = 712227442;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
