#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9966;
_Bool var_2 = (_Bool)1;
long long int var_3 = -3883508140332175434LL;
int var_7 = 649811298;
int var_14 = 1396767857;
long long int var_18 = -220602973621473946LL;
int zero = 0;
unsigned short var_20 = (unsigned short)18729;
signed char var_21 = (signed char)-99;
short var_22 = (short)-20051;
unsigned long long int var_23 = 11259490662500505315ULL;
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
