#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = 5277372102970018009LL;
signed char var_5 = (signed char)24;
unsigned char var_6 = (unsigned char)107;
int var_10 = 1304462624;
signed char var_12 = (signed char)-9;
int zero = 0;
unsigned short var_13 = (unsigned short)34467;
unsigned short var_14 = (unsigned short)51725;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7629705234139894325LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
