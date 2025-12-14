#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)101;
signed char var_10 = (signed char)47;
int var_15 = 1751945317;
signed char var_17 = (signed char)-91;
int zero = 0;
int var_20 = 953261834;
long long int var_21 = 6381033868003214929LL;
unsigned char var_22 = (unsigned char)198;
int var_23 = 712186387;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
