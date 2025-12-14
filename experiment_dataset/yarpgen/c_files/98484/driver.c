#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 77161903U;
unsigned long long int var_4 = 3069774448843038612ULL;
unsigned short var_6 = (unsigned short)65410;
unsigned int var_7 = 3966805260U;
unsigned char var_8 = (unsigned char)80;
short var_10 = (short)32094;
unsigned int var_13 = 641931018U;
unsigned short var_14 = (unsigned short)49485;
int zero = 0;
unsigned short var_15 = (unsigned short)11964;
unsigned int var_16 = 788797387U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
