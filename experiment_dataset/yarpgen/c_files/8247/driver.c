#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
short var_2 = (short)26433;
unsigned char var_3 = (unsigned char)173;
short var_6 = (short)16741;
unsigned char var_8 = (unsigned char)73;
long long int var_9 = 6384405124059207772LL;
unsigned long long int var_10 = 10080121243716120408ULL;
int zero = 0;
unsigned int var_11 = 83092350U;
unsigned short var_12 = (unsigned short)55533;
unsigned int var_13 = 2309483018U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
