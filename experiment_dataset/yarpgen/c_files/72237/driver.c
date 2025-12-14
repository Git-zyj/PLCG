#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25856;
short var_3 = (short)18346;
long long int var_11 = 8684442218355525903LL;
short var_12 = (short)17523;
int var_15 = 2014927174;
int var_17 = 511737379;
int zero = 0;
long long int var_19 = -1680687032938490016LL;
int var_20 = 2126907314;
void init() {
}

void checksum() {
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
