#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6129322997138052606ULL;
unsigned long long int var_2 = 14814889765400978853ULL;
short var_5 = (short)21486;
short var_8 = (short)5948;
int var_10 = 928243503;
unsigned short var_11 = (unsigned short)32612;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)-24018;
short var_17 = (short)11985;
unsigned int var_18 = 2725809592U;
short var_19 = (short)-31861;
short var_20 = (short)29758;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
