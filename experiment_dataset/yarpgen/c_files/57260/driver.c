#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3162116065051754007LL;
unsigned short var_3 = (unsigned short)35569;
_Bool var_5 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4022179974U;
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
