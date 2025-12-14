#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18282;
short var_2 = (short)-31395;
signed char var_8 = (signed char)-115;
unsigned char var_10 = (unsigned char)173;
int zero = 0;
unsigned char var_17 = (unsigned char)219;
unsigned int var_18 = 2947581718U;
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
