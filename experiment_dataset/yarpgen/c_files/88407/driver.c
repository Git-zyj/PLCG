#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3088929623U;
unsigned short var_1 = (unsigned short)40379;
_Bool var_3 = (_Bool)0;
long long int var_5 = -1749423524031658737LL;
int var_6 = 2031529743;
unsigned int var_7 = 2470620081U;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
unsigned int var_10 = 3097086794U;
long long int var_11 = -1160527343429606767LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)136;
unsigned short var_14 = (unsigned short)48778;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
