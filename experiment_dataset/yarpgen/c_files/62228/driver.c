#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44266;
unsigned int var_4 = 556228786U;
unsigned short var_7 = (unsigned short)19534;
short var_8 = (short)17836;
short var_9 = (short)3051;
short var_11 = (short)12255;
int zero = 0;
int var_19 = -1007059590;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)65008;
unsigned short var_22 = (unsigned short)62063;
int var_23 = -2029751083;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
