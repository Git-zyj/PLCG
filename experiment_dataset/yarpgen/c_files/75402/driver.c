#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31621;
unsigned long long int var_2 = 14501681313116126571ULL;
unsigned char var_3 = (unsigned char)245;
long long int var_7 = -5685195803971192995LL;
signed char var_8 = (signed char)6;
int var_9 = 202872279;
int zero = 0;
long long int var_10 = -8162712753077614436LL;
unsigned int var_11 = 1797117051U;
long long int var_12 = 7389709126741132565LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
