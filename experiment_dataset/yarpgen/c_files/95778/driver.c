#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned char var_1 = (unsigned char)232;
signed char var_7 = (signed char)-114;
signed char var_8 = (signed char)3;
unsigned char var_11 = (unsigned char)29;
signed char var_12 = (signed char)122;
signed char var_16 = (signed char)-64;
int zero = 0;
unsigned char var_18 = (unsigned char)147;
unsigned char var_19 = (unsigned char)63;
signed char var_20 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
