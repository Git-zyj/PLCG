#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30062;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-4590;
unsigned int var_3 = 4006919981U;
unsigned int var_4 = 3129342441U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)64322;
short var_11 = (short)10036;
short var_12 = (short)-624;
unsigned int var_13 = 833763797U;
unsigned char var_14 = (unsigned char)190;
unsigned int var_15 = 3707039370U;
unsigned short var_16 = (unsigned short)54296;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2066965049U;
short var_19 = (short)-24871;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
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
