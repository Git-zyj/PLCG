#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)54;
unsigned short var_8 = (unsigned short)13942;
short var_10 = (short)29191;
short var_11 = (short)13501;
short var_12 = (short)-11716;
int zero = 0;
unsigned short var_14 = (unsigned short)64620;
long long int var_15 = 2977745167278423673LL;
short var_16 = (short)27498;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
