#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
signed char var_3 = (signed char)-113;
unsigned long long int var_5 = 4908297951524238392ULL;
unsigned long long int var_8 = 18350619175046110226ULL;
unsigned char var_12 = (unsigned char)99;
int zero = 0;
unsigned char var_14 = (unsigned char)224;
int var_15 = 806846472;
unsigned long long int var_16 = 16799344248761806275ULL;
unsigned long long int var_17 = 2244966288242195300ULL;
unsigned int var_18 = 3666516462U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
