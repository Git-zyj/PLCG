#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4782;
short var_6 = (short)-23679;
unsigned short var_10 = (unsigned short)65120;
unsigned int var_12 = 3150001901U;
signed char var_17 = (signed char)-71;
int zero = 0;
unsigned char var_19 = (unsigned char)232;
signed char var_20 = (signed char)-87;
unsigned char var_21 = (unsigned char)199;
void init() {
}

void checksum() {
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
