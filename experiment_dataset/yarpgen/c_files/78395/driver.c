#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)22475;
unsigned short var_6 = (unsigned short)7811;
signed char var_8 = (signed char)-113;
signed char var_10 = (signed char)78;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
int var_14 = -812649379;
unsigned char var_15 = (unsigned char)216;
short var_16 = (short)8389;
unsigned short var_17 = (unsigned short)49446;
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
