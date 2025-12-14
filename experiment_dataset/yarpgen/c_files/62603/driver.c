#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)1103;
long long int var_7 = 4783041388069660893LL;
unsigned long long int var_13 = 2570794181636165166ULL;
int zero = 0;
unsigned long long int var_15 = 9481468912936409404ULL;
short var_16 = (short)-2792;
unsigned short var_17 = (unsigned short)63315;
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
