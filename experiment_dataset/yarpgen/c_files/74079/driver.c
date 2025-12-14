#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)123;
signed char var_5 = (signed char)-96;
unsigned short var_9 = (unsigned short)1889;
unsigned long long int var_13 = 2043407615061294335ULL;
unsigned long long int var_15 = 12115643255490158639ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
long long int var_17 = 8782011667432491176LL;
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
