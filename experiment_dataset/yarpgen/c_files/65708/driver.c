#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3296267426U;
unsigned char var_9 = (unsigned char)147;
signed char var_10 = (signed char)-99;
int var_11 = -2104399599;
int var_14 = -1090158706;
int zero = 0;
unsigned long long int var_17 = 16504218227384698253ULL;
unsigned int var_18 = 2890423129U;
void init() {
}

void checksum() {
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
