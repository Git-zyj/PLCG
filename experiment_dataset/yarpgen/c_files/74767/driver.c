#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)87;
unsigned long long int var_7 = 15083873175715523957ULL;
long long int var_10 = 1801178739093295684LL;
unsigned short var_12 = (unsigned short)41441;
int zero = 0;
short var_13 = (short)27955;
short var_14 = (short)-15515;
unsigned char var_15 = (unsigned char)254;
long long int var_16 = -3668557483233501018LL;
unsigned char var_17 = (unsigned char)9;
short var_18 = (short)2694;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
