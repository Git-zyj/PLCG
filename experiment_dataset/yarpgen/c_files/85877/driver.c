#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
unsigned int var_2 = 2412880843U;
unsigned short var_9 = (unsigned short)63521;
unsigned long long int var_10 = 10881061039281997379ULL;
unsigned short var_14 = (unsigned short)17033;
int zero = 0;
int var_19 = -1946225131;
unsigned short var_20 = (unsigned short)19259;
unsigned char var_21 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
