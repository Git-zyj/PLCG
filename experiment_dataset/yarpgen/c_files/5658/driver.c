#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12548;
unsigned short var_5 = (unsigned short)29728;
unsigned short var_6 = (unsigned short)50492;
unsigned char var_8 = (unsigned char)181;
int zero = 0;
short var_14 = (short)11409;
unsigned int var_15 = 486223509U;
unsigned int var_16 = 2028437660U;
short var_17 = (short)28264;
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
