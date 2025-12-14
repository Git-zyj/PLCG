#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46189;
long long int var_3 = -2493444364310890334LL;
unsigned char var_7 = (unsigned char)13;
int zero = 0;
unsigned char var_14 = (unsigned char)131;
unsigned char var_15 = (unsigned char)7;
unsigned char var_16 = (unsigned char)56;
short var_17 = (short)14387;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
