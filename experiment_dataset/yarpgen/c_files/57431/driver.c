#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15431885487266450910ULL;
unsigned short var_7 = (unsigned short)20067;
unsigned char var_8 = (unsigned char)247;
unsigned long long int var_9 = 5592676837667446514ULL;
unsigned short var_11 = (unsigned short)43310;
signed char var_12 = (signed char)60;
unsigned short var_13 = (unsigned short)20498;
unsigned int var_14 = 2682350182U;
long long int var_15 = 6477461033433200872LL;
unsigned long long int var_16 = 414507202586327836ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)225;
_Bool var_18 = (_Bool)0;
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
