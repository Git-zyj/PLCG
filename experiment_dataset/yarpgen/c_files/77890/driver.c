#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)114;
unsigned char var_3 = (unsigned char)4;
unsigned int var_4 = 1366153670U;
unsigned long long int var_5 = 7959850416201478082ULL;
long long int var_6 = 6847906656235208350LL;
long long int var_7 = 8753492421518351870LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 676484258U;
int var_10 = 1065659609;
int var_11 = 659912005;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 1819215200254744766ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)157;
unsigned short var_15 = (unsigned short)32399;
int var_16 = 2040482265;
unsigned int var_17 = 1785244423U;
long long int var_18 = 4613971641163258999LL;
long long int var_19 = 7148106094581623733LL;
long long int var_20 = 896712821272731316LL;
unsigned int var_21 = 4050291658U;
long long int var_22 = 3063546255688457558LL;
unsigned char arr_0 [21] ;
int arr_2 [21] ;
short arr_3 [21] ;
int arr_5 [21] ;
int arr_6 [21] [21] ;
unsigned char arr_7 [21] ;
unsigned char arr_8 [21] ;
_Bool arr_9 [21] [21] ;
_Bool arr_11 [21] [21] [21] [21] ;
unsigned long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -777015481;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-2168;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -434123940 : 777838051;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -30875989;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)141 : (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 7123324479573754491ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
