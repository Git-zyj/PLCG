#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1836229646;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)8596;
int var_10 = -1356148356;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12999881287932280370ULL;
signed char var_13 = (signed char)-104;
unsigned short var_14 = (unsigned short)42707;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 7185644772943915724LL;
unsigned short var_18 = (unsigned short)64207;
unsigned short var_19 = (unsigned short)20070;
unsigned long long int var_20 = 4836966007440920346ULL;
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
