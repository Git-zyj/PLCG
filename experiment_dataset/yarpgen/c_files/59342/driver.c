#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)112;
unsigned long long int var_5 = 4491213858376288627ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)55808;
unsigned long long int var_11 = 4453619730004969503ULL;
short var_13 = (short)11040;
int var_14 = 1388526983;
signed char var_16 = (signed char)75;
int zero = 0;
unsigned int var_17 = 1053451323U;
long long int var_18 = -7369249490318182422LL;
void init() {
}

void checksum() {
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
