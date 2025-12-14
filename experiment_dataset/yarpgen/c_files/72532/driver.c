#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5368090098247074380LL;
unsigned char var_3 = (unsigned char)149;
long long int var_5 = -1271491466301969882LL;
long long int var_6 = 4152096017262455064LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
unsigned int var_12 = 2524643530U;
unsigned short var_13 = (unsigned short)47146;
signed char var_14 = (signed char)-52;
signed char var_15 = (signed char)2;
short var_16 = (short)-1518;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
