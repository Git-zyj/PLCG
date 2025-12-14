#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4075251326882460185LL;
unsigned int var_2 = 2994155407U;
unsigned short var_4 = (unsigned short)7841;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = 1531878218;
long long int var_11 = -7740278287967064298LL;
unsigned short var_14 = (unsigned short)58071;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5185964319817377003LL;
int var_17 = 2049713510;
short var_18 = (short)7886;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
