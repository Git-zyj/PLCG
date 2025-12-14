#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)12866;
long long int var_7 = -6845998705704385324LL;
unsigned char var_14 = (unsigned char)56;
int zero = 0;
int var_15 = 1304256646;
int var_16 = -1895492961;
signed char var_17 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
