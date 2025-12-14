#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
unsigned char var_1 = (unsigned char)113;
int var_2 = -1632966230;
unsigned char var_12 = (unsigned char)139;
unsigned char var_15 = (unsigned char)16;
int zero = 0;
unsigned char var_20 = (unsigned char)45;
short var_21 = (short)30089;
void init() {
}

void checksum() {
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
