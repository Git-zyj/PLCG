#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43229;
unsigned char var_1 = (unsigned char)201;
int var_3 = 419983418;
unsigned int var_6 = 1127283130U;
short var_9 = (short)-11651;
int zero = 0;
int var_11 = -843351042;
unsigned char var_12 = (unsigned char)86;
unsigned char var_13 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
