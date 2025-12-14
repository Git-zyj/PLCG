#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64583;
short var_1 = (short)-26825;
unsigned short var_3 = (unsigned short)22544;
unsigned short var_4 = (unsigned short)8965;
unsigned char var_5 = (unsigned char)51;
unsigned short var_6 = (unsigned short)56405;
unsigned short var_8 = (unsigned short)54038;
int var_13 = 559458930;
int zero = 0;
signed char var_17 = (signed char)66;
unsigned char var_18 = (unsigned char)191;
long long int var_19 = 7356642061045578086LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
