#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29575;
short var_1 = (short)-4451;
short var_3 = (short)-19444;
signed char var_4 = (signed char)45;
unsigned long long int var_5 = 4088747242789297067ULL;
unsigned long long int var_6 = 2366763373362719393ULL;
short var_7 = (short)4944;
short var_8 = (short)23409;
signed char var_9 = (signed char)-122;
_Bool var_10 = (_Bool)1;
short var_11 = (short)15038;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 6050916744630583507ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)30132;
signed char var_17 = (signed char)126;
short var_18 = (short)26092;
short var_19 = (short)11597;
short var_20 = (short)-9471;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
