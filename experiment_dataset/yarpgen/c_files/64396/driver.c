#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)40;
unsigned int var_2 = 2379591940U;
signed char var_4 = (signed char)42;
unsigned long long int var_5 = 4325450542970661444ULL;
int var_6 = -1011440395;
unsigned char var_7 = (unsigned char)240;
unsigned long long int var_8 = 13510781376522317122ULL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)6749;
unsigned char var_11 = (unsigned char)186;
unsigned long long int var_12 = 7528643783545988873ULL;
signed char var_13 = (signed char)-123;
unsigned short var_16 = (unsigned short)12057;
unsigned short var_17 = (unsigned short)18546;
int zero = 0;
unsigned char var_18 = (unsigned char)185;
signed char var_19 = (signed char)27;
unsigned long long int var_20 = 10734257136549718873ULL;
signed char var_21 = (signed char)-69;
signed char var_22 = (signed char)-115;
unsigned long long int var_23 = 13943337670074879919ULL;
unsigned short var_24 = (unsigned short)7367;
unsigned char var_25 = (unsigned char)73;
unsigned long long int var_26 = 8985383078115826852ULL;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)57;
unsigned int var_29 = 3115523631U;
int var_30 = -1992955664;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 3825606065U;
signed char var_33 = (signed char)86;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 2885428366U;
_Bool arr_0 [14] [14] ;
signed char arr_4 [18] [18] ;
unsigned long long int arr_6 [18] [18] [18] ;
unsigned long long int arr_7 [18] ;
signed char arr_15 [13] ;
signed char arr_22 [13] [13] ;
signed char arr_25 [16] [16] ;
_Bool arr_8 [18] [18] ;
unsigned long long int arr_11 [18] ;
unsigned long long int arr_12 [18] [18] ;
signed char arr_13 [18] ;
unsigned char arr_16 [13] ;
signed char arr_17 [13] [13] ;
unsigned long long int arr_21 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 14341275979588285096ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 16232866365897373734ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 406987061672327174ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 12291136144245357530ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = 18068263233822250464ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
