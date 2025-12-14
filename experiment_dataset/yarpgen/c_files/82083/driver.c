#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)254;
unsigned char var_9 = (unsigned char)11;
int var_11 = 1096363147;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
unsigned char var_17 = (unsigned char)243;
unsigned char var_18 = (unsigned char)186;
int var_19 = -2069417137;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
