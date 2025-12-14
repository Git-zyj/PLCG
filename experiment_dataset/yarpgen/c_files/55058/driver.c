#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1353350984U;
unsigned char var_2 = (unsigned char)45;
short var_3 = (short)29763;
unsigned long long int var_4 = 272698637178718600ULL;
unsigned short var_7 = (unsigned short)14586;
unsigned char var_15 = (unsigned char)15;
unsigned short var_16 = (unsigned short)22934;
int zero = 0;
int var_17 = -598878771;
unsigned short var_18 = (unsigned short)15618;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
