#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)30255;
long long int var_12 = 5117335032632019102LL;
unsigned char var_13 = (unsigned char)243;
unsigned char var_18 = (unsigned char)28;
unsigned long long int var_19 = 7766921125752111323ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)218;
short var_21 = (short)-32764;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
