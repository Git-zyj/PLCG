#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
unsigned char var_2 = (unsigned char)24;
unsigned long long int var_3 = 8545453530711076631ULL;
unsigned int var_4 = 2086788681U;
unsigned long long int var_6 = 13131921445411104200ULL;
unsigned short var_7 = (unsigned short)45920;
unsigned char var_8 = (unsigned char)99;
int zero = 0;
short var_11 = (short)11482;
signed char var_12 = (signed char)86;
void init() {
}

void checksum() {
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
