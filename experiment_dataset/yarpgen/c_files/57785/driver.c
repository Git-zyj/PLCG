#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2117;
unsigned int var_7 = 1521478105U;
unsigned int var_8 = 4007624405U;
unsigned short var_9 = (unsigned short)6150;
short var_14 = (short)-27419;
int zero = 0;
unsigned char var_15 = (unsigned char)10;
signed char var_16 = (signed char)-46;
void init() {
}

void checksum() {
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
