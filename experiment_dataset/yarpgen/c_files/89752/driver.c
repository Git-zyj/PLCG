#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8503;
int var_2 = 1412877226;
unsigned long long int var_4 = 16120079677864714403ULL;
unsigned long long int var_5 = 9502769288852848752ULL;
unsigned short var_6 = (unsigned short)30909;
unsigned long long int var_7 = 2781958107171743126ULL;
short var_10 = (short)3086;
short var_11 = (short)27450;
short var_12 = (short)-3324;
unsigned int var_13 = 3080618317U;
int zero = 0;
unsigned long long int var_15 = 3414423128364200163ULL;
unsigned long long int var_16 = 13958986277655373539ULL;
signed char var_17 = (signed char)-10;
short var_18 = (short)-5579;
unsigned long long int var_19 = 14564356086421917909ULL;
long long int var_20 = 5834909480252882904LL;
int var_21 = -71522403;
unsigned short var_22 = (unsigned short)43286;
unsigned short arr_3 [24] [24] ;
unsigned short arr_5 [24] ;
unsigned short arr_6 [24] [24] ;
unsigned long long int arr_9 [25] [25] ;
int arr_7 [24] ;
unsigned char arr_11 [25] ;
long long int arr_12 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)44674 : (unsigned short)19828;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51391 : (unsigned short)1571;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35688 : (unsigned short)1073;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 1905491172014591806ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 772125501 : 489562143;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 7528453651782297435LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
