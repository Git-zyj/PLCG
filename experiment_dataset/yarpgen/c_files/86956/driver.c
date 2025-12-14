#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23329;
long long int var_3 = 1230300107540305723LL;
unsigned long long int var_4 = 5110604575763509833ULL;
unsigned short var_6 = (unsigned short)10120;
unsigned short var_10 = (unsigned short)59740;
unsigned short var_13 = (unsigned short)35235;
int zero = 0;
unsigned long long int var_15 = 2482567175109409447ULL;
short var_16 = (short)28667;
short var_17 = (short)26629;
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
