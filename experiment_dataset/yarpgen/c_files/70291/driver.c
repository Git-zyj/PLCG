#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32121;
unsigned char var_9 = (unsigned char)2;
unsigned char var_14 = (unsigned char)219;
int zero = 0;
unsigned char var_15 = (unsigned char)95;
short var_16 = (short)-8916;
short var_17 = (short)17568;
void init() {
}

void checksum() {
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
