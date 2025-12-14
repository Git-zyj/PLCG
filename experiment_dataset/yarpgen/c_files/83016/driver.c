#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38133;
long long int var_1 = -8171131384933471021LL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)65;
long long int var_7 = 5997486240004032752LL;
unsigned short var_8 = (unsigned short)31028;
short var_9 = (short)-32146;
unsigned int var_10 = 4020745944U;
int zero = 0;
int var_11 = 1194866387;
unsigned short var_12 = (unsigned short)42497;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
