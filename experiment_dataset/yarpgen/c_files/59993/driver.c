#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31278;
unsigned int var_2 = 1257855068U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 11736172265843637249ULL;
_Bool var_8 = (_Bool)1;
int var_12 = 1966076635;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)186;
short var_15 = (short)-26519;
short var_16 = (short)-7361;
long long int var_17 = -6230369726415071388LL;
long long int var_18 = -3685414342731307399LL;
unsigned int var_19 = 3274271989U;
signed char var_20 = (signed char)-9;
int var_21 = -69235996;
unsigned int var_22 = 3558936653U;
signed char var_23 = (signed char)-84;
unsigned int var_24 = 1990070480U;
int var_25 = 996325444;
unsigned char var_26 = (unsigned char)9;
unsigned long long int arr_0 [23] ;
long long int arr_1 [23] ;
unsigned long long int arr_3 [24] [24] ;
unsigned int arr_4 [24] ;
long long int arr_5 [24] ;
signed char arr_6 [24] ;
unsigned long long int arr_7 [24] [24] ;
int arr_8 [24] [24] ;
unsigned char arr_2 [23] [23] ;
unsigned int arr_9 [24] [24] [24] ;
unsigned long long int arr_12 [23] ;
unsigned int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 13698380196080998399ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -3333195395900204295LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 11329724647495915802ULL : 18263633220318367164ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 485920836U : 601138740U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6382577064687284204LL : -5666880137709049988LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 18265349849765302095ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 905783034 : -369323335;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3991817871U : 649152031U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 5719607284348798790ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 61250353U;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
