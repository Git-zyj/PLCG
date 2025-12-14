#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned long long int var_1 = 5992998048571472976ULL;
short var_5 = (short)4310;
signed char var_6 = (signed char)-9;
short var_10 = (short)23585;
unsigned long long int var_15 = 1995679212357072688ULL;
short var_17 = (short)-19081;
short var_18 = (short)-884;
unsigned int var_19 = 2697013307U;
int zero = 0;
short var_20 = (short)-31685;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
