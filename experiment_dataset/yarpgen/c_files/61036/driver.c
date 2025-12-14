#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8469;
short var_3 = (short)-21551;
unsigned short var_6 = (unsigned short)38293;
unsigned int var_7 = 4198869102U;
int var_10 = 1932192376;
int zero = 0;
unsigned char var_12 = (unsigned char)157;
unsigned char var_13 = (unsigned char)113;
long long int var_14 = -1365445192350009165LL;
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
