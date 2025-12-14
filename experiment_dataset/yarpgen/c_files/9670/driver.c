#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25882;
unsigned int var_1 = 1588960666U;
signed char var_5 = (signed char)5;
long long int var_6 = -2989658461854645383LL;
long long int var_7 = 280884151006706808LL;
int var_10 = 392900118;
unsigned short var_12 = (unsigned short)52469;
signed char var_15 = (signed char)-10;
unsigned short var_16 = (unsigned short)31782;
unsigned char var_18 = (unsigned char)93;
int zero = 0;
unsigned int var_19 = 2196438740U;
unsigned int var_20 = 2817568661U;
signed char var_21 = (signed char)-96;
short var_22 = (short)4181;
unsigned long long int var_23 = 11106755613306918182ULL;
signed char var_24 = (signed char)68;
unsigned short var_25 = (unsigned short)11542;
unsigned short var_26 = (unsigned short)37802;
long long int var_27 = 1538241625425667325LL;
int var_28 = 1992717067;
signed char var_29 = (signed char)40;
signed char var_30 = (signed char)-76;
unsigned char var_31 = (unsigned char)84;
signed char var_32 = (signed char)-127;
unsigned long long int var_33 = 14160598712185835987ULL;
short var_34 = (short)1737;
unsigned short var_35 = (unsigned short)17807;
_Bool arr_0 [13] [13] ;
int arr_1 [13] [13] ;
unsigned short arr_2 [13] ;
long long int arr_4 [13] [13] [13] ;
unsigned char arr_7 [13] [13] ;
long long int arr_8 [13] ;
unsigned char arr_10 [19] ;
unsigned short arr_11 [19] ;
unsigned int arr_14 [19] ;
int arr_15 [19] ;
unsigned long long int arr_18 [19] [19] ;
unsigned int arr_19 [19] [19] ;
short arr_20 [19] [19] [19] ;
short arr_23 [19] [19] ;
unsigned short arr_24 [19] [19] ;
signed char arr_33 [22] ;
unsigned int arr_34 [22] ;
signed char arr_6 [13] [13] ;
unsigned short arr_9 [13] ;
int arr_12 [19] ;
unsigned short arr_16 [19] [19] [19] ;
_Bool arr_17 [19] ;
signed char arr_21 [19] [19] [19] ;
unsigned int arr_22 [19] [19] [19] ;
_Bool arr_26 [19] [19] ;
unsigned short arr_31 [19] ;
short arr_32 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 2030382537;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)14471;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 5514675136222789424LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -627995093925650601LL : 9138865747832199339LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned short)36255;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 2749333731U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 7838817;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = 9637944565190236297ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = 2801167603U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)-599;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = (short)7982;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)54967;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = 1917530647U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2459 : (unsigned short)29564;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = -1389824905;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)10466;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 3870613601U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13429 : (unsigned short)30316;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (short)-22904 : (short)-905;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
