#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
short var_4 = (short)-9923;
signed char var_6 = (signed char)-22;
int var_7 = -771235344;
long long int var_8 = 481151156335055454LL;
int var_11 = 2099092324;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)161;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -2002476857;
_Bool var_18 = (_Bool)0;
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
