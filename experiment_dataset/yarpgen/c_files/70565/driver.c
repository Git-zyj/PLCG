#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1954933763;
unsigned short var_4 = (unsigned short)7575;
unsigned short var_8 = (unsigned short)21171;
int var_9 = -152690232;
unsigned short var_10 = (unsigned short)13419;
int var_13 = 709838727;
unsigned char var_14 = (unsigned char)50;
int zero = 0;
int var_18 = 1715958967;
unsigned int var_19 = 3837324432U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
