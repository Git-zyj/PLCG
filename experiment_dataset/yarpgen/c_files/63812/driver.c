#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6096;
unsigned int var_3 = 2848717611U;
int var_5 = -137514646;
unsigned long long int var_6 = 14984176802724683265ULL;
int var_7 = 135520242;
int var_10 = -1692970395;
int var_11 = -1444246682;
unsigned int var_12 = 3206724376U;
unsigned int var_13 = 465792403U;
unsigned short var_14 = (unsigned short)64653;
int zero = 0;
int var_15 = -1138904206;
_Bool var_16 = (_Bool)0;
int var_17 = 1258915201;
void init() {
}

void checksum() {
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
