#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned long long int var_2 = 9694836041485506311ULL;
signed char var_4 = (signed char)96;
unsigned char var_7 = (unsigned char)7;
int var_8 = 1922309619;
short var_12 = (short)-6910;
int zero = 0;
unsigned short var_13 = (unsigned short)51458;
unsigned short var_14 = (unsigned short)24664;
unsigned char var_15 = (unsigned char)55;
void init() {
}

void checksum() {
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
