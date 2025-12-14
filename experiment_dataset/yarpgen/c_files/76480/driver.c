#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12859;
unsigned char var_5 = (unsigned char)16;
unsigned long long int var_6 = 11974297834531397907ULL;
int zero = 0;
short var_10 = (short)32719;
unsigned short var_11 = (unsigned short)57275;
unsigned short var_12 = (unsigned short)5179;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
