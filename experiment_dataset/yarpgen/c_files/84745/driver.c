#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
signed char var_1 = (signed char)8;
unsigned char var_2 = (unsigned char)96;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)18546;
int var_12 = 1190971310;
int zero = 0;
short var_15 = (short)28139;
int var_16 = 1719310963;
unsigned short var_17 = (unsigned short)36018;
void init() {
}

void checksum() {
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
