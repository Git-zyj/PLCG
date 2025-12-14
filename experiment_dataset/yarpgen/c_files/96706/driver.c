#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14826604963152523334ULL;
unsigned long long int var_1 = 11426213027438097341ULL;
signed char var_3 = (signed char)65;
unsigned char var_4 = (unsigned char)75;
unsigned short var_6 = (unsigned short)4997;
unsigned short var_7 = (unsigned short)40007;
signed char var_10 = (signed char)-119;
unsigned long long int var_12 = 1447329970713761234ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2573266262140251704ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
