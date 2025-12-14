#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
signed char var_2 = (signed char)46;
signed char var_3 = (signed char)-81;
long long int var_4 = -4297996181982619531LL;
long long int var_7 = -4755393588965250374LL;
unsigned long long int var_8 = 7984593767136943614ULL;
signed char var_10 = (signed char)-92;
unsigned long long int var_11 = 11441682938723327777ULL;
unsigned long long int var_12 = 9057499167171980156ULL;
int zero = 0;
unsigned long long int var_14 = 2395053569303145994ULL;
long long int var_15 = -596761278756950828LL;
short var_16 = (short)24277;
signed char var_17 = (signed char)84;
short var_18 = (short)13152;
int var_19 = 1611752822;
signed char var_20 = (signed char)76;
unsigned long long int var_21 = 3493853090231771335ULL;
unsigned char var_22 = (unsigned char)186;
unsigned char var_23 = (unsigned char)235;
unsigned int var_24 = 3396121420U;
long long int var_25 = -3131218125155963617LL;
int var_26 = 2076881384;
short var_27 = (short)-25937;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)31;
unsigned long long int var_30 = 13552327299475228832ULL;
unsigned char var_31 = (unsigned char)28;
int var_32 = -706452895;
long long int var_33 = 7506054776961626520LL;
unsigned long long int var_34 = 17747269082551790351ULL;
unsigned char var_35 = (unsigned char)250;
_Bool arr_0 [21] ;
long long int arr_1 [21] ;
short arr_2 [21] [21] [21] ;
unsigned char arr_3 [21] [21] ;
short arr_4 [15] [15] ;
_Bool arr_7 [15] [15] ;
long long int arr_8 [15] [15] [15] [15] ;
_Bool arr_11 [15] ;
short arr_13 [15] [15] [15] [15] [15] ;
long long int arr_17 [15] [15] [15] [15] ;
short arr_18 [15] [15] ;
unsigned char arr_31 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2226429145780294254LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-2033;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)12470;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 741514289466680424LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)5369;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -4135356292173242284LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (short)28675;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)231;
}

void checksum() {
    hash(&seed, var_14);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
