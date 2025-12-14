#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)165;
short var_6 = (short)-30105;
short var_7 = (short)-24592;
unsigned long long int var_10 = 1227090037018372107ULL;
unsigned short var_11 = (unsigned short)38022;
short var_14 = (short)-751;
unsigned short var_16 = (unsigned short)64645;
int zero = 0;
unsigned long long int var_19 = 4677127537863236028ULL;
unsigned short var_20 = (unsigned short)23422;
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
