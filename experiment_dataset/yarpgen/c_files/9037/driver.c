#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45746;
unsigned long long int var_5 = 10294694867403134145ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)19305;
unsigned char var_14 = (unsigned char)167;
int zero = 0;
signed char var_15 = (signed char)-122;
int var_16 = -2301393;
short var_17 = (short)32179;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
