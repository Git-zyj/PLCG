#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 992360875U;
short var_1 = (short)29989;
short var_3 = (short)-24434;
short var_4 = (short)6899;
unsigned char var_6 = (unsigned char)24;
short var_7 = (short)4715;
unsigned int var_10 = 4097424817U;
int var_11 = 405799648;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5164004360561304742ULL;
unsigned short var_15 = (unsigned short)56349;
long long int var_16 = -6834372520754438912LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 324377362U;
unsigned int var_19 = 4055471289U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
