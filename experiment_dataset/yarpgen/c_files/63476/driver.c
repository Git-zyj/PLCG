#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)255;
long long int var_2 = -6729675627043495714LL;
long long int var_5 = 1468205834098573607LL;
int var_8 = -1836424712;
unsigned long long int var_9 = 2598859026611380474ULL;
unsigned long long int var_10 = 16382843922235075048ULL;
short var_12 = (short)23180;
unsigned long long int var_15 = 15387875007196186237ULL;
int var_16 = -1736259116;
int zero = 0;
int var_18 = -926038658;
signed char var_19 = (signed char)76;
signed char var_20 = (signed char)-88;
unsigned char var_21 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
