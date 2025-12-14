#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53626;
signed char var_1 = (signed char)-51;
int var_3 = 460295777;
short var_5 = (short)-19099;
unsigned char var_6 = (unsigned char)104;
unsigned long long int var_7 = 6489368613305240018ULL;
unsigned int var_8 = 1484652837U;
unsigned long long int var_9 = 17951138012388533922ULL;
unsigned char var_10 = (unsigned char)182;
int zero = 0;
unsigned long long int var_11 = 11204699143173878161ULL;
unsigned char var_12 = (unsigned char)69;
int var_13 = -2066797976;
unsigned char var_14 = (unsigned char)13;
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
