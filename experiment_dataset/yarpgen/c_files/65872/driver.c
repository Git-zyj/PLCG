#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1631177951;
long long int var_1 = -5574031632031787867LL;
int var_5 = -2142816601;
short var_8 = (short)-15194;
signed char var_9 = (signed char)121;
int zero = 0;
unsigned char var_11 = (unsigned char)42;
unsigned char var_12 = (unsigned char)199;
int var_13 = 1087167372;
unsigned long long int var_14 = 4039546863979966928ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
