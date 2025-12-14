#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3084485260U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)10132;
unsigned int var_5 = 3630503759U;
unsigned char var_6 = (unsigned char)48;
unsigned char var_7 = (unsigned char)41;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)33134;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
int var_14 = -1048465382;
unsigned long long int var_15 = 10609543230052003017ULL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 8077798778613947459LL;
long long int var_18 = -1048418090208286855LL;
unsigned short var_19 = (unsigned short)18863;
signed char var_20 = (signed char)81;
long long int var_21 = 4794380406581363564LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 16862755594606412477ULL;
unsigned short var_24 = (unsigned short)39906;
signed char var_25 = (signed char)124;
unsigned long long int var_26 = 1988677307757985559ULL;
int var_27 = -7002426;
unsigned int var_28 = 4081563402U;
_Bool var_29 = (_Bool)0;
int var_30 = -1762676422;
long long int var_31 = -601948182157474285LL;
unsigned short var_32 = (unsigned short)38385;
_Bool var_33 = (_Bool)1;
unsigned char var_34 = (unsigned char)194;
unsigned short var_35 = (unsigned short)25704;
unsigned short var_36 = (unsigned short)46706;
signed char var_37 = (signed char)30;
unsigned int var_38 = 3080125738U;
unsigned short var_39 = (unsigned short)10696;
unsigned char var_40 = (unsigned char)30;
_Bool var_41 = (_Bool)0;
unsigned short var_42 = (unsigned short)37509;
long long int arr_4 [24] [24] ;
signed char arr_5 [24] [24] [24] ;
int arr_6 [24] [24] [24] ;
signed char arr_9 [24] ;
long long int arr_10 [24] ;
short arr_11 [24] [24] [24] [24] [24] ;
signed char arr_12 [24] [24] [24] [24] [24] ;
_Bool arr_24 [21] [21] [21] [21] [21] [21] [21] ;
int arr_26 [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -1037290530526966292LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1916589657;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 5327556977164103714LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)31785;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 69016780;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
