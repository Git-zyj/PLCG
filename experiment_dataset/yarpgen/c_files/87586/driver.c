#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-8471;
unsigned short var_2 = (unsigned short)35079;
int var_7 = -89513239;
unsigned int var_8 = 3722360653U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 457212430U;
long long int var_15 = 8621128702515311887LL;
long long int var_16 = 9183410362252785727LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2457654423U;
unsigned char var_22 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
