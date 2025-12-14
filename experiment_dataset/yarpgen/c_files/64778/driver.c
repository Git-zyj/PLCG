#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)101;
signed char var_2 = (signed char)115;
unsigned short var_3 = (unsigned short)27818;
long long int var_10 = 2326513796271972837LL;
signed char var_11 = (signed char)13;
long long int var_12 = 7681230154158151306LL;
unsigned int var_14 = 2100205536U;
int zero = 0;
int var_16 = 892096245;
unsigned short var_17 = (unsigned short)40263;
_Bool var_18 = (_Bool)1;
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
