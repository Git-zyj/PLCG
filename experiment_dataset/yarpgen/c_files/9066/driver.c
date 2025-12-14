#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18251006034013982247ULL;
signed char var_1 = (signed char)-90;
short var_2 = (short)15359;
unsigned char var_4 = (unsigned char)171;
unsigned char var_5 = (unsigned char)3;
short var_6 = (short)11452;
int var_7 = -501331548;
unsigned short var_8 = (unsigned short)16963;
signed char var_9 = (signed char)-88;
short var_10 = (short)26015;
unsigned char var_11 = (unsigned char)17;
unsigned int var_12 = 3270792492U;
int zero = 0;
unsigned short var_13 = (unsigned short)57780;
short var_14 = (short)-9241;
unsigned short var_15 = (unsigned short)15559;
unsigned int var_16 = 1699200215U;
unsigned int var_17 = 3644369327U;
short var_18 = (short)27598;
signed char var_19 = (signed char)-30;
int arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned char arr_2 [16] ;
signed char arr_3 [16] ;
unsigned int arr_4 [16] ;
unsigned int arr_5 [13] [13] ;
unsigned char arr_6 [13] ;
short arr_8 [13] [13] ;
unsigned char arr_13 [13] [13] [13] [13] ;
short arr_14 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1334507140;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1597629245U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1750443436U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 250591776U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-15295;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)159 : (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-31436 : (short)-10416;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
