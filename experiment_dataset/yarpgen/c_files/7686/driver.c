#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -447054825;
unsigned short var_3 = (unsigned short)28233;
signed char var_6 = (signed char)-34;
short var_7 = (short)7398;
int zero = 0;
unsigned short var_12 = (unsigned short)40674;
unsigned char var_13 = (unsigned char)4;
unsigned long long int var_14 = 2416141638850271759ULL;
short var_15 = (short)-27702;
unsigned short var_16 = (unsigned short)15189;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
