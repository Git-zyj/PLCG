#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2852541650U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)20860;
unsigned int var_4 = 256314019U;
short var_6 = (short)-13533;
signed char var_7 = (signed char)110;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)227;
int zero = 0;
long long int var_10 = -6499362761588983311LL;
int var_11 = -1539251374;
unsigned long long int var_12 = 16179712608936437760ULL;
int var_13 = -1174994516;
int var_14 = -260316381;
unsigned int var_15 = 349055046U;
unsigned short var_16 = (unsigned short)8131;
unsigned short var_17 = (unsigned short)50468;
short var_18 = (short)55;
unsigned char var_19 = (unsigned char)56;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)109;
unsigned char var_22 = (unsigned char)231;
_Bool var_23 = (_Bool)0;
long long int var_24 = -2069294942658309322LL;
unsigned short var_25 = (unsigned short)65298;
int var_26 = 806997391;
short var_27 = (short)32514;
_Bool var_28 = (_Bool)1;
int var_29 = 1714786814;
_Bool arr_0 [25] [25] ;
unsigned char arr_1 [25] [25] ;
_Bool arr_4 [25] ;
_Bool arr_5 [25] ;
short arr_6 [25] [25] [25] ;
unsigned short arr_7 [25] [25] [25] [25] ;
short arr_10 [18] ;
short arr_11 [18] [18] ;
_Bool arr_13 [23] [23] ;
unsigned char arr_14 [23] ;
signed char arr_18 [23] ;
signed char arr_20 [23] ;
long long int arr_23 [23] ;
signed char arr_24 [23] ;
long long int arr_26 [23] [23] [23] ;
unsigned short arr_28 [23] ;
short arr_36 [23] ;
int arr_43 [23] [23] [23] ;
_Bool arr_47 [13] [13] ;
unsigned char arr_2 [25] ;
unsigned short arr_3 [25] ;
_Bool arr_12 [18] [18] ;
unsigned short arr_17 [23] ;
unsigned char arr_34 [23] [23] [23] ;
long long int arr_42 [23] [23] [23] [23] [23] ;
int arr_46 [23] ;
_Bool arr_54 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-1157;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62284;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (short)17050;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-15614;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = 181684363542084403LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 524703829717557595LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (unsigned short)36298;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_36 [i_0] = (short)-25985;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 1162437345;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_47 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)56800;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (unsigned short)4836;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)80 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3288967962108140393LL : -8219793491855862735LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? 1233874218 : 1546997176;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_54 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
