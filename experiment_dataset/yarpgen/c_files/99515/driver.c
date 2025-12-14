#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8124;
unsigned int var_5 = 3451307116U;
unsigned char var_6 = (unsigned char)234;
signed char var_11 = (signed char)-104;
int zero = 0;
unsigned char var_16 = (unsigned char)61;
unsigned char var_17 = (unsigned char)250;
int var_18 = 1704534656;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
