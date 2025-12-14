#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1770715542U;
unsigned int var_7 = 2702430059U;
int var_8 = -1904769080;
unsigned short var_10 = (unsigned short)53409;
int var_12 = -555894796;
short var_13 = (short)28330;
long long int var_15 = -6739459559138205767LL;
int zero = 0;
unsigned short var_17 = (unsigned short)13483;
unsigned char var_18 = (unsigned char)176;
_Bool var_19 = (_Bool)0;
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
