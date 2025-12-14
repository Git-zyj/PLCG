#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17059;
int var_11 = 1870910066;
unsigned int var_12 = 362334358U;
unsigned char var_13 = (unsigned char)115;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)-8583;
unsigned int var_18 = 2062250624U;
unsigned int var_19 = 706228715U;
unsigned short var_20 = (unsigned short)24360;
signed char var_21 = (signed char)112;
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
