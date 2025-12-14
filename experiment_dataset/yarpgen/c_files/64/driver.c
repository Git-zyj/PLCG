#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16204;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-4310;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_13 = -2924231331619689387LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)31965;
_Bool var_18 = (_Bool)1;
short var_19 = (short)8506;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
