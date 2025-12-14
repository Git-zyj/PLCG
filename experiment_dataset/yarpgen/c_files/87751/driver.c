#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)22;
unsigned int var_3 = 2826823420U;
signed char var_5 = (signed char)-105;
unsigned short var_7 = (unsigned short)31146;
unsigned char var_12 = (unsigned char)198;
signed char var_14 = (signed char)-124;
unsigned short var_15 = (unsigned short)11160;
unsigned short var_16 = (unsigned short)32687;
int zero = 0;
short var_17 = (short)-21865;
int var_18 = -1907129313;
long long int var_19 = -3480954285193591681LL;
short var_20 = (short)15224;
unsigned int var_21 = 3722108850U;
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
