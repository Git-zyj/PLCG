#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 713986878U;
unsigned char var_4 = (unsigned char)0;
unsigned short var_5 = (unsigned short)45202;
int zero = 0;
short var_13 = (short)-32285;
unsigned short var_14 = (unsigned short)59833;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
