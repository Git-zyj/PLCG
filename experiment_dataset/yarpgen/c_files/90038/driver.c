#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2557390121635231298LL;
signed char var_1 = (signed char)-36;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)24266;
unsigned int var_8 = 2800931281U;
unsigned int var_10 = 508435440U;
unsigned int var_11 = 4257316147U;
int var_14 = -1681220840;
int zero = 0;
int var_15 = -1892502825;
unsigned short var_16 = (unsigned short)14432;
signed char var_17 = (signed char)12;
short var_18 = (short)9788;
int var_19 = -1060526978;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
