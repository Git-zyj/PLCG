#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2666803731U;
int var_1 = -419504621;
long long int var_2 = -4905765967076543695LL;
long long int var_3 = 2840958641545237339LL;
short var_11 = (short)-26162;
long long int var_14 = 5450186582074758019LL;
int zero = 0;
unsigned char var_16 = (unsigned char)143;
unsigned char var_17 = (unsigned char)224;
long long int var_18 = 6753028867385348181LL;
void init() {
}

void checksum() {
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
