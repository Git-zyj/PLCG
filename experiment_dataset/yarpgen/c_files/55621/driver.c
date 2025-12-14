#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
long long int var_3 = -2226645664102141204LL;
short var_4 = (short)-16024;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 13429062057583638493ULL;
short var_8 = (short)-4588;
unsigned long long int var_11 = 215163851241772488ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)30;
unsigned short var_14 = (unsigned short)35829;
signed char var_15 = (signed char)-61;
unsigned char var_16 = (unsigned char)185;
signed char var_17 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
