#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)920;
int var_5 = 983283275;
long long int var_6 = -6319759890079081803LL;
short var_7 = (short)-13382;
short var_8 = (short)-19051;
unsigned int var_9 = 635678928U;
short var_10 = (short)-16423;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)53284;
unsigned int var_13 = 1556170934U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
