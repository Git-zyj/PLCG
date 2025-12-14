#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 888539870124420523ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 13816509249484157369ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7924916076134840018ULL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)26;
long long int var_9 = -5365937190499225878LL;
unsigned long long int var_10 = 17765343982077938928ULL;
short var_11 = (short)-20059;
long long int var_13 = 8066392007124055617LL;
long long int var_14 = -6771062607446577546LL;
unsigned long long int var_15 = 9279054643419561651ULL;
signed char var_16 = (signed char)-83;
int zero = 0;
unsigned int var_18 = 2578304451U;
unsigned int var_19 = 82925916U;
int var_20 = 170118205;
unsigned long long int var_21 = 2018196885946184685ULL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3690071362U;
unsigned short var_24 = (unsigned short)62813;
int var_25 = -1891634916;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 206893281U;
_Bool var_28 = (_Bool)1;
short var_29 = (short)16712;
unsigned int arr_1 [13] [13] ;
unsigned int arr_2 [13] ;
int arr_3 [13] [13] ;
_Bool arr_6 [13] ;
_Bool arr_7 [13] ;
_Bool arr_13 [13] ;
unsigned long long int arr_15 [13] [13] ;
signed char arr_16 [19] ;
long long int arr_17 [19] ;
short arr_20 [19] [19] [19] [19] ;
unsigned short arr_5 [13] ;
unsigned int arr_10 [13] ;
signed char arr_11 [13] ;
unsigned int arr_25 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3730571325U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1253602102U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -883803910;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 17093326182656620431ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = -4300459405933518731LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)1225 : (short)-12473;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)26461;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 207320650U : 727965420U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)3 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2051297936U : 3571811425U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
