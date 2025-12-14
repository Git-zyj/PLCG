#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29244;
unsigned char var_5 = (unsigned char)51;
unsigned long long int var_9 = 6823346152279217639ULL;
short var_10 = (short)17378;
signed char var_12 = (signed char)-3;
int zero = 0;
unsigned long long int var_13 = 18129253684294114819ULL;
unsigned long long int var_14 = 9876408240030370313ULL;
unsigned char var_15 = (unsigned char)30;
signed char var_16 = (signed char)-75;
unsigned long long int var_17 = 17731451740903846486ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
