#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
unsigned int var_1 = 2871899330U;
unsigned char var_3 = (unsigned char)205;
unsigned short var_4 = (unsigned short)50198;
unsigned short var_5 = (unsigned short)50603;
short var_6 = (short)-15843;
signed char var_7 = (signed char)-88;
unsigned long long int var_12 = 4891107223073917311ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)6420;
signed char var_15 = (signed char)-97;
unsigned short var_16 = (unsigned short)854;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
