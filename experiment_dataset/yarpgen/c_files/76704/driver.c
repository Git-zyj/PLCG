#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
int var_3 = 878733341;
unsigned short var_4 = (unsigned short)7139;
unsigned char var_8 = (unsigned char)144;
int zero = 0;
unsigned long long int var_10 = 10521396660491884673ULL;
short var_11 = (short)5615;
unsigned char var_12 = (unsigned char)184;
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
