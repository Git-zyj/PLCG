#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2016598406;
_Bool var_3 = (_Bool)0;
int var_5 = 840201373;
signed char var_7 = (signed char)-59;
unsigned short var_12 = (unsigned short)36940;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)30401;
int zero = 0;
unsigned short var_16 = (unsigned short)55838;
_Bool var_17 = (_Bool)1;
int var_18 = 10513836;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
