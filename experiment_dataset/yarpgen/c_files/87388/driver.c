#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3697999845693803866ULL;
int var_5 = 1252162627;
unsigned short var_6 = (unsigned short)26732;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 3865220430U;
short var_15 = (short)26095;
int zero = 0;
unsigned char var_16 = (unsigned char)181;
unsigned int var_17 = 2908110589U;
void init() {
}

void checksum() {
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
