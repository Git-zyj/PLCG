#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_8 = (unsigned char)9;
long long int var_9 = 8990312935636254186LL;
unsigned int var_10 = 28020368U;
signed char var_13 = (signed char)14;
int zero = 0;
unsigned short var_14 = (unsigned short)6494;
short var_15 = (short)4152;
long long int var_16 = 1227673197113895330LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-31795;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
