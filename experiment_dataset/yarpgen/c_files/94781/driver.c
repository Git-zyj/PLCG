#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5607162353573235206LL;
unsigned char var_1 = (unsigned char)131;
long long int var_6 = -6693544394983368770LL;
unsigned int var_8 = 1220306955U;
short var_9 = (short)8154;
int zero = 0;
unsigned long long int var_10 = 16979345096405332101ULL;
unsigned int var_11 = 3198502115U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
