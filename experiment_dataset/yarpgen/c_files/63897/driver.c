#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1164570045U;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)27;
unsigned long long int var_4 = 5344279981347927026ULL;
signed char var_6 = (signed char)-120;
unsigned int var_7 = 2828679588U;
unsigned short var_9 = (unsigned short)32120;
_Bool var_10 = (_Bool)0;
int var_11 = 2069079680;
unsigned short var_13 = (unsigned short)31306;
int zero = 0;
int var_14 = -1315747147;
unsigned short var_15 = (unsigned short)52249;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
