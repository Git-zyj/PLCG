#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25881;
signed char var_4 = (signed char)-91;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)46464;
unsigned long long int var_10 = 6683690723510002168ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)69;
unsigned int var_15 = 3675672132U;
unsigned short var_16 = (unsigned short)46500;
unsigned char var_17 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
