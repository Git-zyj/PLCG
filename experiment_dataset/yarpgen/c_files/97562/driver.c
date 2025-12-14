#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_10 = (unsigned short)27227;
unsigned short var_13 = (unsigned short)60016;
int zero = 0;
unsigned short var_16 = (unsigned short)16778;
unsigned short var_17 = (unsigned short)46303;
long long int var_18 = -4668050763743320112LL;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
