#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21864;
unsigned short var_1 = (unsigned short)18641;
long long int var_2 = 5481612662953991752LL;
unsigned char var_5 = (unsigned char)190;
signed char var_6 = (signed char)-92;
_Bool var_8 = (_Bool)0;
long long int var_11 = 7421772712301333641LL;
unsigned short var_13 = (unsigned short)23214;
int zero = 0;
signed char var_14 = (signed char)-91;
unsigned char var_15 = (unsigned char)116;
unsigned char var_16 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
