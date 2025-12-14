#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26133;
unsigned char var_1 = (unsigned char)21;
short var_2 = (short)-13234;
short var_4 = (short)28200;
short var_6 = (short)-9958;
short var_7 = (short)-4617;
unsigned short var_8 = (unsigned short)11919;
unsigned char var_9 = (unsigned char)6;
short var_10 = (short)30555;
unsigned int var_11 = 811885009U;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
unsigned char var_13 = (unsigned char)170;
unsigned short var_14 = (unsigned short)2725;
short var_15 = (short)-29713;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
