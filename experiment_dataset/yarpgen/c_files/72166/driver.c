#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15509809454910017833ULL;
unsigned short var_4 = (unsigned short)39958;
unsigned long long int var_7 = 11157274189751165687ULL;
unsigned int var_9 = 573629468U;
unsigned long long int var_10 = 10258111494769559638ULL;
unsigned long long int var_11 = 8051763689867599954ULL;
unsigned short var_12 = (unsigned short)12384;
unsigned long long int var_13 = 2868404677756938312ULL;
unsigned long long int var_17 = 9790774516573410537ULL;
int zero = 0;
unsigned long long int var_19 = 6029276773498752540ULL;
unsigned long long int var_20 = 4198877926822893244ULL;
void init() {
}

void checksum() {
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
