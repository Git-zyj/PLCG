#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 3088294196850129585ULL;
unsigned long long int var_5 = 14276890914822880044ULL;
unsigned char var_12 = (unsigned char)82;
short var_16 = (short)9842;
int zero = 0;
unsigned char var_20 = (unsigned char)139;
unsigned char var_21 = (unsigned char)248;
unsigned char var_22 = (unsigned char)219;
unsigned char var_23 = (unsigned char)23;
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
