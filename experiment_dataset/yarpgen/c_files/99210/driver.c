#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29833;
long long int var_3 = 73958283132867263LL;
signed char var_5 = (signed char)-86;
unsigned long long int var_6 = 6386968521160017867ULL;
unsigned short var_8 = (unsigned short)45339;
int zero = 0;
unsigned short var_16 = (unsigned short)50857;
_Bool var_17 = (_Bool)1;
long long int var_18 = 7882763288726966775LL;
unsigned char var_19 = (unsigned char)175;
unsigned int var_20 = 2407006547U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
