#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_5 = 1306081294;
signed char var_7 = (signed char)-14;
int var_10 = -349817105;
unsigned char var_12 = (unsigned char)212;
unsigned short var_13 = (unsigned short)5558;
signed char var_14 = (signed char)63;
short var_16 = (short)29151;
int zero = 0;
short var_19 = (short)18275;
unsigned char var_20 = (unsigned char)201;
short var_21 = (short)-15237;
unsigned int var_22 = 635895810U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
