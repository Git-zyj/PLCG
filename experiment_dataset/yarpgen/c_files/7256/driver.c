#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40210;
unsigned char var_3 = (unsigned char)157;
long long int var_4 = -2950592267556266598LL;
unsigned char var_5 = (unsigned char)232;
unsigned char var_7 = (unsigned char)210;
unsigned long long int var_8 = 3410807424274290647ULL;
unsigned short var_11 = (unsigned short)61421;
int var_14 = -1326382997;
int zero = 0;
short var_15 = (short)22705;
short var_16 = (short)-11461;
unsigned long long int var_17 = 7219757760230274933ULL;
long long int var_18 = 3155479037899021828LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
