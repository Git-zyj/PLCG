#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 12084491604684143750ULL;
unsigned short var_6 = (unsigned short)17409;
unsigned int var_8 = 600106439U;
int var_11 = -2130339597;
unsigned short var_13 = (unsigned short)63965;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15993709351550010727ULL;
int var_19 = 859417430;
signed char var_20 = (signed char)105;
unsigned int var_21 = 2145986320U;
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
