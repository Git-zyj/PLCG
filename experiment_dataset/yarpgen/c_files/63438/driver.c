#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
unsigned char var_2 = (unsigned char)117;
unsigned char var_4 = (unsigned char)5;
unsigned int var_5 = 3786617978U;
unsigned long long int var_6 = 9492365432070281148ULL;
unsigned char var_8 = (unsigned char)166;
int var_11 = -1095094684;
unsigned int var_12 = 958545898U;
int var_14 = -1307260264;
unsigned short var_16 = (unsigned short)19616;
int zero = 0;
short var_17 = (short)-10781;
int var_18 = 1717369703;
unsigned char var_19 = (unsigned char)175;
unsigned long long int var_20 = 8147905684486883525ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
