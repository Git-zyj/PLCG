#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -90513129;
long long int var_2 = 7558260908141813271LL;
unsigned int var_5 = 4231304747U;
long long int var_11 = 5793022794501901693LL;
unsigned char var_13 = (unsigned char)201;
unsigned long long int var_14 = 4090976928107204074ULL;
short var_15 = (short)-28751;
int zero = 0;
signed char var_16 = (signed char)26;
unsigned char var_17 = (unsigned char)110;
unsigned long long int var_18 = 9267426707495015175ULL;
short var_19 = (short)8936;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
