#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)100;
long long int var_3 = -8893278966287036100LL;
unsigned int var_5 = 3426628405U;
unsigned char var_7 = (unsigned char)113;
short var_13 = (short)878;
signed char var_15 = (signed char)55;
unsigned int var_16 = 3645032044U;
int zero = 0;
long long int var_17 = 4895541545220397393LL;
unsigned short var_18 = (unsigned short)63873;
long long int var_19 = -3644080125091136337LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
