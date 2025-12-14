#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6309;
unsigned long long int var_1 = 12042897183856342207ULL;
short var_2 = (short)-4936;
signed char var_4 = (signed char)-72;
_Bool var_5 = (_Bool)1;
short var_6 = (short)8339;
signed char var_7 = (signed char)100;
unsigned short var_8 = (unsigned short)60220;
signed char var_9 = (signed char)123;
short var_10 = (short)-30851;
short var_11 = (short)-18702;
int zero = 0;
unsigned int var_12 = 950317115U;
unsigned long long int var_13 = 7623314061683182687ULL;
_Bool var_14 = (_Bool)1;
int var_15 = -2019417252;
unsigned long long int var_16 = 15498702018515372963ULL;
unsigned int var_17 = 3526706454U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)33438;
unsigned long long int var_20 = 3205798359511339237ULL;
unsigned short var_21 = (unsigned short)12962;
int var_22 = -92424170;
unsigned long long int arr_0 [18] [18] ;
unsigned short arr_2 [18] [18] [18] ;
int arr_5 [18] [18] [18] ;
int arr_7 [18] [18] [18] [18] [18] ;
short arr_8 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_9 [18] ;
_Bool arr_10 [18] ;
_Bool arr_11 [18] [18] [18] [18] ;
short arr_17 [24] [24] ;
unsigned short arr_18 [24] ;
short arr_19 [24] ;
long long int arr_13 [18] ;
unsigned long long int arr_16 [18] ;
unsigned int arr_20 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 4459607517633163243ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)18110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1264042918 : 567884914;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -345366161 : -1480540191;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)20597;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3717361103U : 10578342U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (short)31927;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (unsigned short)18022;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (short)-21163;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 945920302789892175LL : -1483004066063548310LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 12944850990612852936ULL : 3560567144602738859ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = 3464035328U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
