#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16281;
unsigned short var_2 = (unsigned short)22991;
long long int var_3 = -3011467337015114804LL;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)62668;
int zero = 0;
unsigned short var_13 = (unsigned short)11302;
unsigned int var_14 = 2427176045U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
