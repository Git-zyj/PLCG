#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 292461005697751936LL;
unsigned char var_5 = (unsigned char)173;
unsigned char var_15 = (unsigned char)115;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_19 = 6823421605120027275LL;
long long int var_20 = -8125208030353705016LL;
void init() {
}

void checksum() {
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
