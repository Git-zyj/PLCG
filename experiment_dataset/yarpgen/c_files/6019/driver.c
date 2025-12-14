#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53316;
unsigned short var_4 = (unsigned short)29466;
long long int var_5 = 2252784707881666533LL;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 3300834971U;
unsigned char var_12 = (unsigned char)211;
unsigned long long int var_14 = 3389604749116741936ULL;
int zero = 0;
unsigned int var_16 = 1189609712U;
unsigned short var_17 = (unsigned short)29870;
unsigned short var_18 = (unsigned short)12824;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
