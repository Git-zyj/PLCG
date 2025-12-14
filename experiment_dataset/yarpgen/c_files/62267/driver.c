#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2858343812U;
unsigned char var_4 = (unsigned char)45;
unsigned long long int var_5 = 12709675090566345952ULL;
unsigned short var_7 = (unsigned short)49247;
unsigned long long int var_11 = 15047198314536815853ULL;
unsigned long long int var_15 = 12164499508311600082ULL;
int zero = 0;
unsigned int var_19 = 138345093U;
unsigned short var_20 = (unsigned short)48154;
unsigned short var_21 = (unsigned short)35070;
unsigned int var_22 = 4183638721U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
