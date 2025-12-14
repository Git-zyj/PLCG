#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-19;
int var_3 = 1899361558;
unsigned short var_4 = (unsigned short)40596;
short var_6 = (short)-27112;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)18976;
unsigned long long int var_13 = 12117703334991540295ULL;
int var_14 = -193711218;
int var_15 = -156682945;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
