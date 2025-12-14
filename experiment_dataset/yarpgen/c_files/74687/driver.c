#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-119;
unsigned char var_5 = (unsigned char)51;
int var_6 = -1931802446;
unsigned short var_7 = (unsigned short)19801;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)104;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)62199;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 632986299U;
unsigned int var_17 = 445915131U;
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
