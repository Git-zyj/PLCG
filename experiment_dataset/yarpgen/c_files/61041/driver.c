#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8891052214493782185LL;
int var_1 = -1625145786;
unsigned short var_5 = (unsigned short)10338;
unsigned int var_6 = 3138195272U;
int var_7 = -1894736300;
unsigned long long int var_10 = 6159813058095265048ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)2488;
unsigned char var_12 = (unsigned char)206;
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
