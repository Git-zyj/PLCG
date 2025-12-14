#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 161615885U;
unsigned long long int var_1 = 16983926183829678533ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)2249;
_Bool var_7 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)32;
unsigned long long int var_12 = 14319465729454213663ULL;
long long int var_13 = 3223046421748138415LL;
long long int var_14 = 972072916574951301LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
