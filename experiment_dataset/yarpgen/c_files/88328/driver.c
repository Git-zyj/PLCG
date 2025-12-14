#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -334530784;
unsigned short var_11 = (unsigned short)42792;
short var_16 = (short)22575;
long long int var_17 = 3340397913388966925LL;
unsigned char var_19 = (unsigned char)45;
int zero = 0;
int var_20 = -332171623;
signed char var_21 = (signed char)125;
long long int var_22 = 1005123240024729006LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
