#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -82911513;
unsigned long long int var_5 = 13390094263732053645ULL;
int var_7 = 1062218364;
unsigned short var_13 = (unsigned short)7346;
int var_14 = -808847157;
int zero = 0;
unsigned char var_18 = (unsigned char)254;
unsigned int var_19 = 3250922885U;
void init() {
}

void checksum() {
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
