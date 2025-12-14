#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12741486326388693262ULL;
short var_1 = (short)-13276;
short var_2 = (short)6008;
short var_3 = (short)-26212;
unsigned long long int var_4 = 9407511460913471404ULL;
unsigned long long int var_5 = 2183478790659039539ULL;
int var_6 = -240861486;
signed char var_7 = (signed char)-40;
unsigned int var_9 = 2562924102U;
signed char var_10 = (signed char)82;
signed char var_11 = (signed char)42;
long long int var_13 = -6186407634876834894LL;
int zero = 0;
unsigned char var_15 = (unsigned char)69;
short var_16 = (short)-28487;
signed char var_17 = (signed char)-29;
int var_18 = 474918737;
short var_19 = (short)-31957;
short var_20 = (short)-31875;
unsigned long long int var_21 = 3310123401665060198ULL;
unsigned int var_22 = 735131094U;
signed char var_23 = (signed char)-31;
signed char var_24 = (signed char)77;
signed char var_25 = (signed char)-64;
short var_26 = (short)19348;
signed char var_27 = (signed char)75;
signed char var_28 = (signed char)99;
short var_29 = (short)27413;
unsigned int var_30 = 445210467U;
unsigned char var_31 = (unsigned char)101;
unsigned long long int var_32 = 17722588143612552069ULL;
unsigned int var_33 = 3878732852U;
unsigned int var_34 = 4025125575U;
unsigned int var_35 = 1520951189U;
signed char var_36 = (signed char)-48;
unsigned int var_37 = 2315369532U;
unsigned long long int arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
unsigned char arr_2 [13] [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
signed char arr_4 [13] [13] ;
unsigned int arr_8 [13] ;
unsigned long long int arr_29 [13] [13] [13] [13] ;
int arr_15 [13] [13] [13] [13] [13] ;
int arr_20 [13] ;
long long int arr_21 [13] ;
short arr_26 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 9791381355190263532ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)14258;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17546120053835363898ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 430404488U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 5665388842371928878ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 959007423;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = -193735746;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = -2618217517981891987LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = (short)12267;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
