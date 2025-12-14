#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -215179656;
unsigned long long int var_3 = 10702268374300996024ULL;
unsigned long long int var_4 = 5861594953332045353ULL;
short var_5 = (short)16318;
unsigned short var_6 = (unsigned short)34922;
signed char var_7 = (signed char)-83;
signed char var_9 = (signed char)78;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)56320;
short var_12 = (short)2978;
unsigned short var_13 = (unsigned short)5306;
short var_15 = (short)-29186;
int zero = 0;
unsigned char var_17 = (unsigned char)91;
long long int var_18 = -7326429551477469167LL;
unsigned long long int var_19 = 4735468837052401292ULL;
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
