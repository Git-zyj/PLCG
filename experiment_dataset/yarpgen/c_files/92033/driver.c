#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14300;
unsigned int var_1 = 235752269U;
unsigned short var_3 = (unsigned short)45681;
unsigned char var_4 = (unsigned char)139;
unsigned char var_5 = (unsigned char)73;
unsigned long long int var_6 = 14139546576525294846ULL;
unsigned char var_8 = (unsigned char)87;
unsigned long long int var_9 = 1037313258253350457ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)23;
unsigned char var_13 = (unsigned char)215;
long long int var_14 = 5443794544106907152LL;
void init() {
}

void checksum() {
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
