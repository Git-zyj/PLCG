#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6507156813679551457LL;
long long int var_5 = 9036356732366950051LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)45;
unsigned char var_9 = (unsigned char)100;
unsigned int var_10 = 897338702U;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)-9258;
unsigned char var_13 = (unsigned char)189;
void init() {
}

void checksum() {
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
