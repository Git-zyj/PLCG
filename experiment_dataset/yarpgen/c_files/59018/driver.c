#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)7261;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1434934941016544823LL;
short var_7 = (short)-12584;
int zero = 0;
unsigned short var_11 = (unsigned short)37558;
unsigned short var_12 = (unsigned short)42;
signed char var_13 = (signed char)70;
unsigned short var_14 = (unsigned short)37403;
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
