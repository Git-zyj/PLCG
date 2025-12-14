#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1196001672U;
short var_8 = (short)30564;
unsigned short var_14 = (unsigned short)36269;
int zero = 0;
unsigned short var_17 = (unsigned short)24866;
unsigned long long int var_18 = 1744774424785005253ULL;
unsigned int var_19 = 90882661U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
