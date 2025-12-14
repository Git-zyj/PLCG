#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)3;
unsigned int var_3 = 35190527U;
unsigned int var_5 = 1468743595U;
short var_6 = (short)-14140;
int zero = 0;
int var_10 = 558346232;
unsigned char var_11 = (unsigned char)122;
unsigned char var_12 = (unsigned char)201;
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
