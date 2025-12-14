#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 1188912238454556080LL;
int var_7 = 831487309;
unsigned int var_8 = 2617660922U;
_Bool var_9 = (_Bool)0;
long long int var_12 = 3993325920476766539LL;
int zero = 0;
unsigned short var_17 = (unsigned short)56782;
unsigned char var_18 = (unsigned char)238;
int var_19 = -1440297671;
int var_20 = 398010012;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
