#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3099715759745400132LL;
unsigned char var_3 = (unsigned char)206;
unsigned short var_5 = (unsigned short)6323;
unsigned char var_7 = (unsigned char)157;
unsigned char var_9 = (unsigned char)92;
short var_10 = (short)-27129;
int zero = 0;
unsigned int var_12 = 3372233932U;
unsigned int var_13 = 969789619U;
int var_14 = -1609588294;
int var_15 = -1478115894;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
