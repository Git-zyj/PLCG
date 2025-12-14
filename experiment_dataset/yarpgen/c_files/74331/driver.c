#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28941;
short var_4 = (short)4176;
unsigned short var_5 = (unsigned short)52610;
unsigned char var_6 = (unsigned char)207;
short var_7 = (short)30401;
int var_8 = -1795677019;
int var_9 = -749630889;
unsigned short var_11 = (unsigned short)12052;
int zero = 0;
long long int var_14 = 7188239771641948357LL;
unsigned long long int var_15 = 17186728152712348273ULL;
unsigned int var_16 = 4145672248U;
unsigned int var_17 = 2007785346U;
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
