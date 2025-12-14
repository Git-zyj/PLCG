#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
unsigned short var_2 = (unsigned short)10521;
unsigned long long int var_3 = 3080058932767165404ULL;
unsigned char var_4 = (unsigned char)22;
unsigned short var_5 = (unsigned short)3608;
int var_6 = 399272484;
int var_7 = -2139959797;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)194;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 1433478524U;
unsigned char var_14 = (unsigned char)146;
int zero = 0;
unsigned long long int var_15 = 11722992530904864481ULL;
unsigned long long int var_16 = 1462594536606059753ULL;
unsigned long long int var_17 = 17534471764256712166ULL;
unsigned long long int var_18 = 5835346942563300779ULL;
unsigned long long int var_19 = 3137604103620856805ULL;
unsigned short var_20 = (unsigned short)29479;
short var_21 = (short)-28923;
unsigned char var_22 = (unsigned char)6;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)16;
unsigned long long int var_25 = 16577065501572119796ULL;
unsigned long long int var_26 = 992487723089643775ULL;
short var_27 = (short)12040;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
short var_30 = (short)16177;
_Bool arr_0 [13] ;
short arr_4 [18] [18] ;
unsigned char arr_6 [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] ;
unsigned char arr_12 [18] [18] [18] ;
signed char arr_22 [21] ;
unsigned long long int arr_30 [21] [21] [21] [21] ;
short arr_31 [21] [21] [21] [21] ;
unsigned char arr_33 [21] ;
int arr_34 [21] ;
unsigned long long int arr_3 [13] ;
int arr_17 [18] ;
unsigned long long int arr_18 [18] [18] [18] ;
unsigned int arr_19 [18] ;
_Bool arr_28 [21] [21] [21] ;
unsigned long long int arr_35 [21] ;
unsigned char arr_40 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-15682;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8830399788739704047ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 16964064926120446300ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)32249;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = -2063608071;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 15729556484797209419ULL : 320830293896407723ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -1046543799 : -850720243;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 7316468682919407293ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 2682898504U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_35 [i_0] = 9911068618285181695ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (unsigned char)231 : (unsigned char)198;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
