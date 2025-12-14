#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16229;
long long int var_5 = 5196679270905385785LL;
short var_9 = (short)30740;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-19;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 3301065613U;
int zero = 0;
short var_17 = (short)15291;
signed char var_18 = (signed char)-122;
short var_19 = (short)-6950;
unsigned int var_20 = 2709158079U;
_Bool var_21 = (_Bool)1;
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
