#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14667;
int var_7 = -1239041673;
short var_9 = (short)30235;
unsigned char var_11 = (unsigned char)172;
int zero = 0;
unsigned char var_14 = (unsigned char)144;
unsigned long long int var_15 = 5015468482841510873ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
