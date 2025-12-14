#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)76;
signed char var_5 = (signed char)33;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-32747;
unsigned int var_9 = 3693455434U;
unsigned short var_13 = (unsigned short)28760;
short var_14 = (short)2544;
int zero = 0;
unsigned short var_17 = (unsigned short)21491;
unsigned char var_18 = (unsigned char)13;
_Bool var_19 = (_Bool)0;
int var_20 = 1362359048;
void init() {
}

void checksum() {
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
