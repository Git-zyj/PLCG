#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30325;
unsigned short var_3 = (unsigned short)38186;
long long int var_5 = -1434817021557332103LL;
unsigned char var_11 = (unsigned char)99;
int zero = 0;
signed char var_15 = (signed char)-41;
short var_16 = (short)30911;
unsigned short var_17 = (unsigned short)2533;
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
