#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64940;
unsigned short var_1 = (unsigned short)34031;
unsigned long long int var_2 = 11072050880355098226ULL;
unsigned short var_5 = (unsigned short)4950;
short var_6 = (short)-14025;
unsigned int var_9 = 2477539376U;
signed char var_10 = (signed char)-120;
unsigned short var_13 = (unsigned short)35492;
unsigned short var_15 = (unsigned short)50128;
unsigned short var_17 = (unsigned short)49963;
int zero = 0;
signed char var_19 = (signed char)96;
unsigned long long int var_20 = 2732928467904907415ULL;
int var_21 = -985079757;
unsigned long long int var_22 = 11400576657168113234ULL;
int var_23 = -1886876421;
int var_24 = 898822786;
unsigned short var_25 = (unsigned short)49822;
signed char var_26 = (signed char)47;
long long int arr_1 [22] [22] ;
short arr_3 [22] [22] ;
long long int arr_4 [22] ;
int arr_5 [22] ;
_Bool arr_6 [22] [22] [22] [22] ;
unsigned short arr_7 [22] ;
unsigned int arr_9 [22] [22] [22] ;
unsigned long long int arr_10 [22] [22] ;
long long int arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 702440992158270488LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-14521;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -436395319244538771LL : -6146747619257413253LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1619649181;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)48548;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1186709713U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 9459468971620914432ULL : 18432033238143809519ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 5628762685058862851LL : 7620651373781408122LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
