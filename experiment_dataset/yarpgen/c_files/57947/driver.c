#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20724;
unsigned int var_1 = 2693942495U;
unsigned int var_4 = 1935591670U;
unsigned short var_9 = (unsigned short)5657;
int var_10 = 1670973792;
int zero = 0;
unsigned short var_11 = (unsigned short)41347;
unsigned char var_12 = (unsigned char)50;
void init() {
}

void checksum() {
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
