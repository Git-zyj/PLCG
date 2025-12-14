#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20283;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)63912;
unsigned int var_7 = 2954732474U;
unsigned int var_10 = 3307548546U;
unsigned int var_11 = 3047269238U;
unsigned short var_13 = (unsigned short)63481;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)-18557;
unsigned int var_17 = 3888134844U;
unsigned short var_18 = (unsigned short)40188;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
