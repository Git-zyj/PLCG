#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1450972489U;
unsigned short var_6 = (unsigned short)15288;
int var_7 = 497603263;
unsigned short var_11 = (unsigned short)47940;
int zero = 0;
unsigned short var_12 = (unsigned short)35413;
unsigned char var_13 = (unsigned char)131;
unsigned short var_14 = (unsigned short)18669;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
