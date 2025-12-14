#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7888446474316196640LL;
unsigned long long int var_2 = 3046941968263912640ULL;
unsigned short var_4 = (unsigned short)2595;
unsigned short var_7 = (unsigned short)23922;
short var_9 = (short)-19857;
_Bool var_10 = (_Bool)1;
long long int var_11 = -7208053811962242744LL;
int zero = 0;
unsigned int var_12 = 2015787168U;
unsigned char var_13 = (unsigned char)117;
unsigned char var_14 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
