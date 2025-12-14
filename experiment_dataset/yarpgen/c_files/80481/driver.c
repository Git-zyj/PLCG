#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)172;
short var_6 = (short)-23211;
signed char var_7 = (signed char)33;
short var_12 = (short)15387;
unsigned int var_14 = 122694128U;
short var_15 = (short)-32449;
int zero = 0;
short var_16 = (short)2138;
signed char var_17 = (signed char)-2;
void init() {
}

void checksum() {
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
