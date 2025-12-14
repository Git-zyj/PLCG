#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)81;
long long int var_6 = 7554151765065017644LL;
unsigned char var_11 = (unsigned char)210;
unsigned long long int var_13 = 1032076210968592500ULL;
short var_17 = (short)29883;
int zero = 0;
unsigned short var_18 = (unsigned short)2016;
long long int var_19 = 3597026940690795664LL;
signed char var_20 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
