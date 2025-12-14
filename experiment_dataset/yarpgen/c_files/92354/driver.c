#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2002762564U;
short var_5 = (short)1189;
unsigned char var_8 = (unsigned char)195;
int var_9 = -465265353;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)19;
unsigned int var_13 = 353072750U;
unsigned short var_15 = (unsigned short)54356;
int zero = 0;
short var_16 = (short)-29845;
unsigned short var_17 = (unsigned short)21298;
unsigned short var_18 = (unsigned short)48834;
int var_19 = 1780816576;
unsigned char var_20 = (unsigned char)30;
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
