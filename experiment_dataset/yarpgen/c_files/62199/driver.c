#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5013423302811648176LL;
signed char var_2 = (signed char)107;
unsigned int var_5 = 928206422U;
int var_6 = 999115811;
unsigned int var_9 = 1296478606U;
signed char var_13 = (signed char)-122;
long long int var_14 = -2386242268431444663LL;
int zero = 0;
unsigned long long int var_17 = 12128322514438004092ULL;
long long int var_18 = -8088465555988179064LL;
void init() {
}

void checksum() {
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
