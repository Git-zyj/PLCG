#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2009121750;
unsigned long long int var_3 = 955940896095064895ULL;
int var_4 = 1062086578;
short var_5 = (short)-18678;
short var_9 = (short)-22866;
int zero = 0;
unsigned short var_10 = (unsigned short)6811;
unsigned short var_11 = (unsigned short)11166;
int var_12 = 1529592361;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
