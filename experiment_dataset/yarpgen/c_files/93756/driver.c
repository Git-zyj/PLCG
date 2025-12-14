#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3811209133573798851LL;
unsigned int var_1 = 1881446519U;
unsigned int var_5 = 3758469839U;
unsigned short var_7 = (unsigned short)53173;
long long int var_8 = 3270371544301927548LL;
unsigned int var_10 = 4138917954U;
unsigned int var_11 = 3201311898U;
int zero = 0;
unsigned int var_14 = 2510932065U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
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
