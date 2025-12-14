#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 84280831;
short var_4 = (short)-27298;
unsigned short var_5 = (unsigned short)36499;
unsigned short var_6 = (unsigned short)46393;
int var_7 = -738805629;
signed char var_11 = (signed char)74;
int zero = 0;
unsigned char var_15 = (unsigned char)6;
long long int var_16 = -2047940945087893834LL;
unsigned short var_17 = (unsigned short)46766;
unsigned char var_18 = (unsigned char)232;
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
