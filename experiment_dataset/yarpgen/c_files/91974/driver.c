#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-7150;
unsigned short var_6 = (unsigned short)4386;
int var_9 = -1908117691;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
short var_13 = (short)-8398;
int var_14 = 1977593939;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
