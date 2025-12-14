#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5163120261150802796LL;
unsigned int var_3 = 1100774916U;
long long int var_4 = -3078827808217147743LL;
unsigned int var_5 = 1629696471U;
unsigned long long int var_6 = 17711793755471190433ULL;
long long int var_7 = 2638904429722346479LL;
long long int var_8 = 3425928853237728492LL;
signed char var_10 = (signed char)-48;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 5104376838238714399ULL;
short var_13 = (short)1037;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
