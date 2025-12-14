#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5181207152425005339LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17320919234731278355ULL;
long long int var_16 = -3425609154326206659LL;
int zero = 0;
unsigned int var_18 = 794308439U;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2172721883119223188LL;
unsigned short var_21 = (unsigned short)52486;
void init() {
}

void checksum() {
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
