#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 661791489;
unsigned long long int var_4 = 14249964851485611138ULL;
unsigned char var_7 = (unsigned char)155;
int zero = 0;
int var_10 = -1988570404;
unsigned char var_11 = (unsigned char)249;
int var_12 = 1218802702;
long long int var_13 = 1165965924494024828LL;
unsigned int var_14 = 1118406828U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-27657;
unsigned char var_17 = (unsigned char)203;
unsigned int var_18 = 1949594408U;
unsigned char var_19 = (unsigned char)198;
unsigned long long int var_20 = 17827486331140996912ULL;
unsigned char var_21 = (unsigned char)149;
int var_22 = -866940034;
int var_23 = -569866759;
long long int var_24 = 1763238145578453543LL;
unsigned int arr_0 [12] ;
long long int arr_1 [12] [12] ;
unsigned char arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
signed char arr_6 [21] [21] ;
unsigned char arr_7 [21] ;
int arr_8 [21] ;
unsigned int arr_9 [21] ;
long long int arr_12 [21] ;
short arr_13 [21] [21] ;
signed char arr_15 [21] [21] ;
short arr_16 [21] ;
unsigned short arr_17 [21] ;
short arr_19 [21] [21] [21] ;
unsigned short arr_20 [21] [21] [21] ;
long long int arr_21 [21] ;
int arr_5 [12] ;
long long int arr_10 [21] ;
unsigned int arr_11 [21] [21] ;
_Bool arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 4022614772U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 672837537367499679LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2671962781588055861ULL : 2976930984523721092ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -1141249814;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 1061892812U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = -4076176045394799782LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-12463;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (short)-2223;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned short)2323;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)-823;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)13213;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = 7045093282672287328LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 858211746 : -403431816;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1141201424949437455LL : -2385825220811697304LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 1849763566U : 631049946U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
