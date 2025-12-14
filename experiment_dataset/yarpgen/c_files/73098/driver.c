#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52290;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)11619;
int var_4 = -1435919833;
unsigned int var_8 = 787301407U;
long long int var_9 = 8078310274326513928LL;
unsigned long long int var_10 = 2955263326608945995ULL;
short var_12 = (short)22983;
long long int var_17 = -5338348798211143233LL;
int zero = 0;
unsigned int var_18 = 3770677521U;
int var_19 = 631537525;
long long int var_20 = -5674327806336282047LL;
short var_21 = (short)-20798;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
