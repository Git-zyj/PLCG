#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
unsigned int var_1 = 1701084270U;
long long int var_4 = -933762436836154909LL;
long long int var_5 = 4423655734537633633LL;
unsigned long long int var_7 = 6088082126698599974ULL;
int zero = 0;
signed char var_11 = (signed char)113;
unsigned int var_12 = 2223021877U;
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
