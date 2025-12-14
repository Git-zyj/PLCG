#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
unsigned char var_2 = (unsigned char)104;
unsigned char var_4 = (unsigned char)99;
short var_7 = (short)-7435;
unsigned short var_8 = (unsigned short)17789;
unsigned char var_11 = (unsigned char)162;
unsigned char var_12 = (unsigned char)61;
int zero = 0;
short var_13 = (short)-10715;
unsigned char var_14 = (unsigned char)35;
short var_15 = (short)10837;
short var_16 = (short)-17073;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
