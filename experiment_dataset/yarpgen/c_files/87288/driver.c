#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-32667;
int var_5 = 630078605;
unsigned char var_6 = (unsigned char)233;
int var_10 = -1781118656;
unsigned char var_14 = (unsigned char)120;
signed char var_15 = (signed char)83;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_19 = (short)13295;
unsigned char var_20 = (unsigned char)218;
signed char var_21 = (signed char)-7;
int var_22 = 1154988010;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
