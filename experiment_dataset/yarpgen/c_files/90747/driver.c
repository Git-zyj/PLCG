#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2009026978U;
unsigned char var_1 = (unsigned char)159;
signed char var_2 = (signed char)-127;
int var_3 = -539855253;
unsigned long long int var_4 = 8719776372577926178ULL;
long long int var_6 = -7633351186910972216LL;
long long int var_8 = -1213916178346114553LL;
int zero = 0;
unsigned short var_11 = (unsigned short)45211;
long long int var_12 = -3819104455667136564LL;
signed char var_13 = (signed char)58;
unsigned long long int var_14 = 2681144625491733806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
