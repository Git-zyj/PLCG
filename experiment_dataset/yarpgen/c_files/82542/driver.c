#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8796866231341269495LL;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_5 = -1886736097;
unsigned int var_6 = 3305910244U;
unsigned int var_7 = 3567420239U;
signed char var_8 = (signed char)-18;
long long int var_10 = -8288185738313260915LL;
_Bool var_13 = (_Bool)1;
int var_15 = 959531896;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-28231;
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
