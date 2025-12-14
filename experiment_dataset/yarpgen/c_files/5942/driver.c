#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
long long int var_1 = 635191007913447130LL;
unsigned char var_3 = (unsigned char)65;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1460482447494053434LL;
long long int var_8 = 771136273996477358LL;
signed char var_11 = (signed char)54;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)149;
int zero = 0;
unsigned int var_17 = 2351679862U;
unsigned int var_18 = 1829853389U;
unsigned char var_19 = (unsigned char)173;
void init() {
}

void checksum() {
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
