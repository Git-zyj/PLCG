#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1602547230U;
signed char var_3 = (signed char)28;
unsigned long long int var_7 = 15281780064312379113ULL;
unsigned int var_8 = 3666859614U;
unsigned int var_11 = 1533994479U;
unsigned short var_14 = (unsigned short)8911;
signed char var_17 = (signed char)39;
unsigned short var_18 = (unsigned short)54590;
int zero = 0;
unsigned int var_19 = 1798644235U;
unsigned int var_20 = 3176844459U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
