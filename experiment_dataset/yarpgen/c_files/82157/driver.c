#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1830328262;
unsigned long long int var_1 = 8027646551744802443ULL;
int var_2 = -328337198;
int var_3 = 1744818655;
unsigned long long int var_4 = 5738098298215363264ULL;
unsigned int var_5 = 3769906971U;
unsigned short var_6 = (unsigned short)41943;
unsigned short var_7 = (unsigned short)30043;
unsigned int var_9 = 2782581779U;
int zero = 0;
unsigned char var_11 = (unsigned char)51;
unsigned short var_12 = (unsigned short)61516;
unsigned char var_13 = (unsigned char)126;
short var_14 = (short)23160;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
