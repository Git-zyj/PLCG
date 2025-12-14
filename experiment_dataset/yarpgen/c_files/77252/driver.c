#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)21;
unsigned char var_8 = (unsigned char)213;
unsigned char var_9 = (unsigned char)252;
_Bool var_10 = (_Bool)0;
int var_14 = 737037492;
short var_15 = (short)27284;
short var_18 = (short)-30096;
long long int var_19 = -1348470068541853697LL;
int zero = 0;
unsigned long long int var_20 = 16644672421254541793ULL;
unsigned char var_21 = (unsigned char)128;
signed char var_22 = (signed char)59;
unsigned short var_23 = (unsigned short)22747;
_Bool var_24 = (_Bool)1;
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
