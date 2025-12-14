#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16506;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)75;
unsigned char var_7 = (unsigned char)114;
short var_9 = (short)24721;
signed char var_10 = (signed char)-73;
long long int var_11 = 9180020727695498658LL;
short var_12 = (short)-28388;
unsigned short var_13 = (unsigned short)59299;
unsigned short var_14 = (unsigned short)62512;
signed char var_17 = (signed char)48;
int var_18 = -574964428;
long long int var_19 = -5985027021529819440LL;
int zero = 0;
unsigned int var_20 = 1895317645U;
int var_21 = -1132111679;
signed char var_22 = (signed char)-63;
unsigned int var_23 = 2158946844U;
long long int var_24 = 6095279746118655781LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
