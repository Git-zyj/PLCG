#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54844;
short var_2 = (short)19507;
unsigned int var_3 = 3805943416U;
unsigned short var_5 = (unsigned short)13835;
short var_8 = (short)12408;
unsigned short var_9 = (unsigned short)19255;
unsigned long long int var_10 = 4016960706194954514ULL;
signed char var_12 = (signed char)45;
int zero = 0;
unsigned short var_13 = (unsigned short)40795;
unsigned short var_14 = (unsigned short)64374;
_Bool var_15 = (_Bool)1;
long long int var_16 = 3275234671467571514LL;
signed char var_17 = (signed char)-40;
int var_18 = -2117380097;
int var_19 = 1378216877;
unsigned short var_20 = (unsigned short)15143;
unsigned long long int var_21 = 3415745832102100854ULL;
short arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
unsigned short arr_2 [25] [25] [25] ;
unsigned short arr_5 [25] [25] [25] ;
unsigned short arr_7 [25] [25] [25] ;
short arr_8 [25] ;
unsigned short arr_9 [25] ;
short arr_10 [25] [25] [25] [25] [25] ;
short arr_11 [25] [25] [25] [25] [25] ;
short arr_6 [25] ;
unsigned short arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)28958;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 675436039U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)30820 : (unsigned short)501;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24090 : (unsigned short)23758;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)60743;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)31179 : (short)20362;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)42037;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-10305 : (short)-2582;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-18308 : (short)19209;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)7874 : (short)-7478;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)22672;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
