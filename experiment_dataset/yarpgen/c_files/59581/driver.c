#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -37252932;
long long int var_5 = -2070328985443339323LL;
_Bool var_8 = (_Bool)0;
unsigned int var_14 = 2304801590U;
int zero = 0;
unsigned short var_15 = (unsigned short)22887;
unsigned int var_16 = 3345088386U;
unsigned char var_17 = (unsigned char)28;
short var_18 = (short)14636;
unsigned char var_19 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
