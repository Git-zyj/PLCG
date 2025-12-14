#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 629276864U;
int var_2 = 1583587402;
short var_4 = (short)310;
_Bool var_11 = (_Bool)0;
int var_15 = -1881693544;
int zero = 0;
long long int var_17 = -4703120722795901312LL;
unsigned short var_18 = (unsigned short)33601;
long long int var_19 = -4782595713459341885LL;
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
