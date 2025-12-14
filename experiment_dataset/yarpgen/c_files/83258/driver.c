#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18423680773854452952ULL;
signed char var_2 = (signed char)-86;
_Bool var_3 = (_Bool)0;
int var_5 = -1279983073;
signed char var_8 = (signed char)-1;
unsigned long long int var_9 = 648234418332066544ULL;
unsigned short var_10 = (unsigned short)27273;
unsigned int var_13 = 170579036U;
unsigned char var_15 = (unsigned char)29;
int zero = 0;
int var_16 = 892804171;
signed char var_17 = (signed char)-94;
signed char var_18 = (signed char)42;
short var_19 = (short)-31646;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
