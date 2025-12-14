#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1048419222U;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)52;
signed char var_3 = (signed char)101;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)16;
long long int var_6 = -5120527086412954234LL;
int var_7 = -1876595536;
unsigned int var_8 = 602571747U;
signed char var_9 = (signed char)-83;
unsigned short var_10 = (unsigned short)32179;
short var_11 = (short)-20590;
int var_12 = -1645619720;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1686408694U;
int zero = 0;
long long int var_15 = -4830696557585735497LL;
short var_16 = (short)-6999;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7254790401421003292LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 497708306U;
_Bool var_22 = (_Bool)1;
long long int var_23 = -4014673856130270276LL;
unsigned short var_24 = (unsigned short)19750;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
