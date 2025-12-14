#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1776015310;
unsigned short var_3 = (unsigned short)45675;
short var_8 = (short)26551;
int var_9 = 130555846;
int zero = 0;
long long int var_10 = 6338258546020727053LL;
unsigned int var_11 = 2015420213U;
unsigned char var_12 = (unsigned char)212;
unsigned short var_13 = (unsigned short)15539;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
