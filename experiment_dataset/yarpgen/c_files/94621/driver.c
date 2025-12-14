#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-891;
short var_3 = (short)-8173;
unsigned short var_4 = (unsigned short)56712;
unsigned long long int var_5 = 11510226752215671574ULL;
unsigned short var_6 = (unsigned short)60905;
long long int var_7 = -7652329846438861915LL;
signed char var_8 = (signed char)-24;
short var_10 = (short)-7738;
long long int var_11 = -4340063903808752862LL;
short var_12 = (short)3633;
unsigned short var_13 = (unsigned short)1710;
long long int var_14 = 6889641029186374682LL;
short var_17 = (short)-11649;
long long int var_18 = -4089676663402031868LL;
int zero = 0;
unsigned short var_19 = (unsigned short)34587;
unsigned int var_20 = 2449064649U;
unsigned int var_21 = 2800738843U;
unsigned long long int var_22 = 7796276394059604555ULL;
long long int var_23 = 7638416578262975561LL;
unsigned short var_24 = (unsigned short)7841;
unsigned short var_25 = (unsigned short)5666;
short var_26 = (short)-10316;
unsigned int var_27 = 3010528958U;
long long int arr_0 [16] ;
short arr_3 [22] [22] ;
unsigned short arr_4 [22] [22] ;
unsigned char arr_7 [19] ;
unsigned short arr_2 [16] ;
int arr_5 [22] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 6138787384980528544LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-30947;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47447;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)34312;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 812426168;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 3851834169U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
