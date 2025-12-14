#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)594;
unsigned int var_3 = 3237154658U;
long long int var_4 = 2713704592600254113LL;
unsigned char var_5 = (unsigned char)162;
signed char var_6 = (signed char)-70;
unsigned long long int var_7 = 15543820430087235628ULL;
signed char var_8 = (signed char)-111;
unsigned long long int var_10 = 16842959179545574242ULL;
unsigned short var_11 = (unsigned short)34494;
int zero = 0;
unsigned int var_14 = 3097564767U;
signed char var_15 = (signed char)88;
unsigned long long int var_16 = 7215528383462383185ULL;
_Bool var_17 = (_Bool)0;
int var_18 = -569535085;
_Bool var_19 = (_Bool)0;
int var_20 = -375505049;
unsigned char var_21 = (unsigned char)96;
signed char var_22 = (signed char)81;
unsigned char var_23 = (unsigned char)201;
short var_24 = (short)-28163;
int var_25 = 1877869904;
unsigned char var_26 = (unsigned char)236;
_Bool var_27 = (_Bool)0;
unsigned int arr_1 [11] ;
unsigned char arr_2 [11] [11] ;
int arr_3 [11] [11] [11] ;
short arr_6 [11] [11] ;
unsigned int arr_8 [11] [11] [11] ;
unsigned long long int arr_9 [11] ;
signed char arr_10 [11] [11] [11] ;
unsigned long long int arr_13 [11] [11] [11] ;
unsigned long long int arr_15 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1450035485U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)53 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 533557459 : 1298070519;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)13872;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1019829291U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6600337302567836343ULL : 2578786997780133165ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3166705137814235194ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = 8051011396611040292ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
