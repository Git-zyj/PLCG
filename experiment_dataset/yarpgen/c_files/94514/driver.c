#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1675;
unsigned long long int var_1 = 10450344824835090624ULL;
unsigned long long int var_9 = 18297706915636170863ULL;
unsigned long long int var_15 = 9206228503225517971ULL;
unsigned long long int var_17 = 8834466833359531374ULL;
int zero = 0;
unsigned long long int var_20 = 1587278870221302440ULL;
short var_21 = (short)-2014;
unsigned short var_22 = (unsigned short)18142;
unsigned char var_23 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
