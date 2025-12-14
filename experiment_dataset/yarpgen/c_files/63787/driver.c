#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32397;
signed char var_2 = (signed char)11;
signed char var_7 = (signed char)70;
unsigned char var_8 = (unsigned char)205;
signed char var_10 = (signed char)-25;
short var_11 = (short)-30699;
unsigned char var_12 = (unsigned char)135;
int zero = 0;
short var_14 = (short)492;
signed char var_15 = (signed char)-43;
signed char var_16 = (signed char)4;
unsigned char var_17 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
