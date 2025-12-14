#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
unsigned char var_3 = (unsigned char)92;
unsigned short var_4 = (unsigned short)16073;
unsigned char var_6 = (unsigned char)48;
unsigned short var_8 = (unsigned short)60235;
unsigned char var_9 = (unsigned char)14;
int zero = 0;
unsigned char var_10 = (unsigned char)70;
short var_11 = (short)-14613;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
