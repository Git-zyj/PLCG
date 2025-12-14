#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1586876175;
unsigned int var_1 = 2863049940U;
signed char var_2 = (signed char)-50;
unsigned short var_5 = (unsigned short)19327;
signed char var_6 = (signed char)-118;
short var_7 = (short)-2523;
unsigned short var_8 = (unsigned short)19395;
unsigned int var_9 = 4246777254U;
unsigned long long int var_10 = 18383256403215547953ULL;
unsigned int var_11 = 39485893U;
short var_12 = (short)-5846;
int zero = 0;
long long int var_15 = -8886349134632281086LL;
signed char var_16 = (signed char)62;
unsigned long long int var_17 = 12353906185531071584ULL;
unsigned char var_18 = (unsigned char)24;
short var_19 = (short)17645;
unsigned int var_20 = 2112150719U;
unsigned long long int var_21 = 5131664655021446888ULL;
_Bool arr_2 [12] ;
_Bool arr_3 [12] [12] [12] ;
short arr_6 [25] ;
unsigned long long int arr_8 [25] ;
unsigned short arr_9 [25] [25] [25] ;
unsigned char arr_10 [25] [25] [25] ;
unsigned long long int arr_5 [12] [12] ;
signed char arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)-5932;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 17000063027902254103ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)25760 : (unsigned short)29072;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 6784671466416337545ULL : 7164815019781065460ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)8 : (signed char)-45;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
