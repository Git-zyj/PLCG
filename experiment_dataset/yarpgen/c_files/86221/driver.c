#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
unsigned short var_4 = (unsigned short)33586;
int var_6 = 1495899728;
unsigned long long int var_9 = 678838346283472415ULL;
int zero = 0;
long long int var_15 = -2052751245222117064LL;
unsigned int var_16 = 1329223037U;
void init() {
}

void checksum() {
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
