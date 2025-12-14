#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2978321928U;
unsigned short var_4 = (unsigned short)9238;
int var_8 = 1732062026;
long long int var_11 = 2967829833886827415LL;
int zero = 0;
signed char var_14 = (signed char)-94;
short var_15 = (short)4669;
signed char var_16 = (signed char)-81;
unsigned int var_17 = 3753862356U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
