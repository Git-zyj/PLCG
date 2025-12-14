#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)-13862;
int var_5 = -1425225258;
unsigned char var_7 = (unsigned char)110;
unsigned short var_13 = (unsigned short)35080;
int var_14 = -592886339;
short var_15 = (short)-28535;
int zero = 0;
int var_18 = -1511937642;
long long int var_19 = -7383637712999119569LL;
void init() {
}

void checksum() {
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
