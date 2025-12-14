#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)54625;
unsigned short var_6 = (unsigned short)619;
unsigned long long int var_7 = 17599803408329136032ULL;
long long int var_9 = 8913218675573334744LL;
unsigned long long int var_14 = 7391098864617002614ULL;
int zero = 0;
signed char var_17 = (signed char)48;
signed char var_18 = (signed char)38;
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
