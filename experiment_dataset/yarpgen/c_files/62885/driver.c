#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1360225130905896817LL;
unsigned char var_3 = (unsigned char)208;
unsigned short var_5 = (unsigned short)2014;
long long int var_7 = -8353175169165947962LL;
unsigned int var_12 = 2223076479U;
unsigned int var_13 = 2904432984U;
unsigned long long int var_15 = 2781487323215669654ULL;
int var_18 = -1896072971;
int zero = 0;
short var_20 = (short)-14662;
unsigned char var_21 = (unsigned char)150;
signed char var_22 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
