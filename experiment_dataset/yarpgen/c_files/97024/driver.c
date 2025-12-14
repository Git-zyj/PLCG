#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)-2704;
unsigned int var_12 = 187382021U;
short var_17 = (short)-2107;
signed char var_18 = (signed char)60;
int zero = 0;
short var_19 = (short)-10515;
int var_20 = 657962891;
int var_21 = -258781081;
void init() {
}

void checksum() {
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
