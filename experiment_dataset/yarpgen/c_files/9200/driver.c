#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1741829997U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)22919;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-11950;
short var_12 = (short)-3675;
short var_13 = (short)25297;
unsigned long long int var_14 = 3657550906558417613ULL;
unsigned int var_15 = 1175561232U;
unsigned long long int var_16 = 6066131729233405509ULL;
unsigned int var_17 = 1826552974U;
unsigned long long int var_18 = 16403355554613635828ULL;
long long int arr_0 [18] ;
unsigned char arr_1 [18] ;
unsigned int arr_2 [18] [18] ;
unsigned int arr_3 [18] ;
unsigned int arr_4 [18] [18] [18] ;
unsigned short arr_10 [12] ;
short arr_8 [18] [18] [18] ;
unsigned char arr_11 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -4738424564880543872LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 2003523271U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1160984047U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1906779445U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34532 : (unsigned short)45524;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-26223;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)175 : (unsigned char)68;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
