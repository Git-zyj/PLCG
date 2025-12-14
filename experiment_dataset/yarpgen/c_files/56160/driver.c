#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1761471731;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)26866;
int var_17 = -1038244092;
int zero = 0;
unsigned short var_20 = (unsigned short)57765;
unsigned int var_21 = 2876840264U;
long long int var_22 = 7440007702785740581LL;
unsigned char var_23 = (unsigned char)56;
short var_24 = (short)3152;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
