#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 868055069;
unsigned long long int var_4 = 174457902604033966ULL;
signed char var_7 = (signed char)93;
signed char var_10 = (signed char)-2;
long long int var_12 = -2799317430018350821LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11372107373214822154ULL;
int var_17 = -1868964901;
unsigned char var_18 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
