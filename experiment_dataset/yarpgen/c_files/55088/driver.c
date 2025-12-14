#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1614615126489611849LL;
unsigned char var_2 = (unsigned char)243;
unsigned int var_6 = 475143792U;
unsigned short var_8 = (unsigned short)35001;
unsigned char var_10 = (unsigned char)58;
unsigned char var_11 = (unsigned char)12;
int zero = 0;
unsigned short var_12 = (unsigned short)118;
unsigned int var_13 = 2069304844U;
short var_14 = (short)-27034;
long long int var_15 = -3319573269769490139LL;
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
