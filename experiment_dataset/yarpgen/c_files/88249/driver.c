#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2002091524;
unsigned long long int var_2 = 1867809583355655424ULL;
unsigned long long int var_3 = 3809615507686704213ULL;
short var_6 = (short)-18746;
unsigned short var_7 = (unsigned short)14023;
signed char var_8 = (signed char)-126;
unsigned short var_10 = (unsigned short)58367;
unsigned char var_11 = (unsigned char)12;
unsigned int var_12 = 4171128817U;
long long int var_13 = 5893979531352761303LL;
unsigned char var_14 = (unsigned char)239;
signed char var_16 = (signed char)-8;
int zero = 0;
unsigned long long int var_17 = 5607217039263088400ULL;
unsigned short var_18 = (unsigned short)17314;
short var_19 = (short)-19044;
int var_20 = -1170277014;
long long int var_21 = -3538991010654736016LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
