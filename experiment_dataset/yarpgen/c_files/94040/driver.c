#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 539453078;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)26577;
long long int var_5 = -2119025172964259657LL;
unsigned short var_6 = (unsigned short)50922;
unsigned long long int var_9 = 4211919704255424879ULL;
_Bool var_10 = (_Bool)0;
int var_12 = -446038702;
unsigned long long int var_15 = 4261465454321658376ULL;
unsigned int var_16 = 3715211698U;
signed char var_17 = (signed char)62;
int zero = 0;
unsigned int var_20 = 3997640341U;
unsigned short var_21 = (unsigned short)27409;
short var_22 = (short)27136;
unsigned char var_23 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
