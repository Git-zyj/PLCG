#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)143;
short var_8 = (short)-14229;
int var_11 = 240987768;
int zero = 0;
unsigned long long int var_15 = 2409618561886059681ULL;
unsigned char var_16 = (unsigned char)39;
unsigned short var_17 = (unsigned short)43952;
int var_18 = 1590696983;
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
