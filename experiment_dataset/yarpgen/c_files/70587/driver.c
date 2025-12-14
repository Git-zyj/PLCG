#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-724;
unsigned int var_2 = 1369565914U;
unsigned char var_4 = (unsigned char)86;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)44360;
int zero = 0;
unsigned short var_15 = (unsigned short)21636;
unsigned short var_16 = (unsigned short)56638;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
