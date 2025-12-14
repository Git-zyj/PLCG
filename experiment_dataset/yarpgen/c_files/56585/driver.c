#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1646;
unsigned int var_1 = 2767108289U;
unsigned char var_2 = (unsigned char)155;
short var_6 = (short)17533;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
unsigned int var_12 = 378989792U;
unsigned char var_13 = (unsigned char)218;
short var_14 = (short)-2324;
unsigned char var_15 = (unsigned char)130;
void init() {
}

void checksum() {
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
