#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 761835470;
unsigned short var_2 = (unsigned short)41697;
long long int var_4 = -576591674652770129LL;
unsigned int var_5 = 2816453394U;
short var_6 = (short)-32106;
unsigned char var_7 = (unsigned char)141;
unsigned long long int var_8 = 14923266715156537835ULL;
long long int var_10 = -8912792971618104240LL;
signed char var_11 = (signed char)-81;
int zero = 0;
int var_12 = -94615497;
signed char var_13 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
