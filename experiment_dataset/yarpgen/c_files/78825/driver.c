#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36916;
short var_1 = (short)12394;
unsigned long long int var_3 = 2016420946848601700ULL;
short var_4 = (short)-17151;
unsigned short var_7 = (unsigned short)24490;
unsigned short var_9 = (unsigned short)12799;
unsigned long long int var_13 = 1690756837490769405ULL;
int zero = 0;
unsigned long long int var_14 = 3859673737090865233ULL;
int var_15 = 1201929673;
int var_16 = -830065662;
unsigned short var_17 = (unsigned short)64397;
void init() {
}

void checksum() {
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
