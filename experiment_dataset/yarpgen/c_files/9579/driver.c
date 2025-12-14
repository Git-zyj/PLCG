#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
short var_1 = (short)5659;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3044955007U;
long long int var_6 = 8271719157437430386LL;
short var_7 = (short)3028;
unsigned int var_9 = 150121950U;
long long int var_13 = 6838552535422948298LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)44914;
_Bool var_16 = (_Bool)1;
int var_17 = -87649778;
long long int var_18 = 6181299532863855172LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
