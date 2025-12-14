#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 6930279515615306182ULL;
unsigned short var_5 = (unsigned short)64690;
unsigned char var_6 = (unsigned char)99;
unsigned char var_7 = (unsigned char)144;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)51571;
int var_10 = -1901741936;
signed char var_13 = (signed char)113;
int zero = 0;
unsigned short var_14 = (unsigned short)54015;
unsigned int var_15 = 666564586U;
short var_16 = (short)-15282;
unsigned int var_17 = 756829299U;
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
