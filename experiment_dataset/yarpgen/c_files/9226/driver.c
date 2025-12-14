#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9594651056754013734ULL;
short var_1 = (short)-39;
short var_2 = (short)32049;
short var_3 = (short)16763;
unsigned short var_4 = (unsigned short)32772;
unsigned long long int var_5 = 5197115265703712757ULL;
signed char var_6 = (signed char)-96;
unsigned short var_7 = (unsigned short)22466;
unsigned char var_8 = (unsigned char)250;
unsigned short var_9 = (unsigned short)6062;
short var_10 = (short)26390;
unsigned short var_11 = (unsigned short)35865;
unsigned char var_12 = (unsigned char)114;
unsigned short var_13 = (unsigned short)20740;
int var_14 = -654977001;
short var_15 = (short)-10668;
unsigned short var_16 = (unsigned short)6741;
int zero = 0;
unsigned char var_18 = (unsigned char)140;
unsigned int var_19 = 3415912220U;
unsigned char var_20 = (unsigned char)54;
short var_21 = (short)14876;
unsigned long long int var_22 = 1036520040169986471ULL;
unsigned char var_23 = (unsigned char)171;
unsigned long long int var_24 = 3741057699354122066ULL;
short var_25 = (short)9098;
unsigned long long int var_26 = 1469534778284469593ULL;
short var_27 = (short)-6014;
unsigned char var_28 = (unsigned char)88;
unsigned short var_29 = (unsigned short)702;
short var_30 = (short)25150;
unsigned char var_31 = (unsigned char)216;
unsigned int var_32 = 3171871456U;
unsigned short var_33 = (unsigned short)524;
signed char var_34 = (signed char)-126;
short var_35 = (short)20995;
unsigned int var_36 = 3261848347U;
unsigned char arr_9 [21] ;
unsigned char arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (unsigned char)175;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
