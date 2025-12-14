#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22937;
unsigned int var_10 = 892043234U;
short var_12 = (short)8487;
unsigned short var_14 = (unsigned short)46947;
unsigned char var_15 = (unsigned char)179;
int zero = 0;
short var_16 = (short)19936;
unsigned short var_17 = (unsigned short)24109;
void init() {
}

void checksum() {
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
