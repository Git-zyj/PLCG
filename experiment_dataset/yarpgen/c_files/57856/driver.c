#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4291099563149186708LL;
unsigned int var_1 = 3319138620U;
signed char var_3 = (signed char)72;
unsigned short var_4 = (unsigned short)24287;
signed char var_6 = (signed char)-60;
unsigned char var_7 = (unsigned char)212;
int var_11 = -1471808766;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_17 = (short)29748;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 562639001U;
void init() {
}

void checksum() {
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
