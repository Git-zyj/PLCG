#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)100;
short var_7 = (short)-10014;
unsigned char var_14 = (unsigned char)77;
unsigned char var_15 = (unsigned char)8;
int zero = 0;
unsigned char var_16 = (unsigned char)90;
_Bool var_17 = (_Bool)1;
short var_18 = (short)1681;
short var_19 = (short)6479;
void init() {
}

void checksum() {
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
