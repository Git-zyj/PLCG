#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3233694314U;
unsigned long long int var_3 = 3676076897281272418ULL;
unsigned short var_5 = (unsigned short)8477;
short var_7 = (short)12363;
short var_8 = (short)-8715;
unsigned short var_10 = (unsigned short)35575;
unsigned long long int var_11 = 15415958846478179967ULL;
unsigned int var_13 = 2472529204U;
int zero = 0;
short var_15 = (short)8651;
short var_16 = (short)2832;
short var_17 = (short)6537;
unsigned short var_18 = (unsigned short)61505;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
