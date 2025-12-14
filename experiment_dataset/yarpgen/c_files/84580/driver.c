#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5356186305856669271ULL;
unsigned char var_2 = (unsigned char)31;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 8844755571074561764ULL;
signed char var_7 = (signed char)115;
unsigned char var_12 = (unsigned char)136;
short var_16 = (short)13074;
unsigned char var_17 = (unsigned char)232;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)13304;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-79;
unsigned long long int var_23 = 3839562875728510609ULL;
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
