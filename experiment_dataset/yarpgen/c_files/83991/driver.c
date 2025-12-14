#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3111261494908142324LL;
unsigned char var_2 = (unsigned char)210;
unsigned char var_7 = (unsigned char)218;
short var_9 = (short)-2100;
short var_14 = (short)2969;
int zero = 0;
signed char var_15 = (signed char)-81;
unsigned char var_16 = (unsigned char)16;
int var_17 = -2013946609;
signed char var_18 = (signed char)61;
void init() {
}

void checksum() {
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
