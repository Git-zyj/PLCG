#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3338511249U;
signed char var_1 = (signed char)-61;
unsigned char var_2 = (unsigned char)72;
signed char var_4 = (signed char)47;
unsigned int var_5 = 2491109663U;
unsigned short var_6 = (unsigned short)43780;
unsigned char var_8 = (unsigned char)45;
int zero = 0;
unsigned char var_11 = (unsigned char)166;
short var_12 = (short)-24584;
unsigned char var_13 = (unsigned char)7;
unsigned int var_14 = 3985720552U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
