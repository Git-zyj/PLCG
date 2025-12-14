#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1195058827;
short var_2 = (short)7774;
short var_3 = (short)27705;
short var_5 = (short)-24909;
short var_8 = (short)-6314;
long long int var_12 = -255313687438793156LL;
short var_14 = (short)28251;
unsigned int var_16 = 874123520U;
int zero = 0;
signed char var_17 = (signed char)-95;
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
