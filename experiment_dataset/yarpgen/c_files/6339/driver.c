#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22185;
unsigned long long int var_4 = 7598945564780915987ULL;
unsigned char var_7 = (unsigned char)44;
int var_11 = -103690674;
int zero = 0;
int var_16 = 526829627;
unsigned short var_17 = (unsigned short)49516;
void init() {
}

void checksum() {
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
