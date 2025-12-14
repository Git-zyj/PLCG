#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)18198;
_Bool var_6 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_15 = -917783276;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)11706;
int zero = 0;
short var_20 = (short)-1269;
unsigned short var_21 = (unsigned short)56675;
unsigned short var_22 = (unsigned short)18516;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
