#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -49887195;
unsigned short var_3 = (unsigned short)51292;
unsigned char var_5 = (unsigned char)133;
unsigned char var_11 = (unsigned char)7;
unsigned char var_13 = (unsigned char)65;
int zero = 0;
unsigned short var_14 = (unsigned short)39934;
unsigned char var_15 = (unsigned char)164;
unsigned short var_16 = (unsigned short)33607;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
