#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
_Bool var_1 = (_Bool)0;
short var_3 = (short)7232;
_Bool var_4 = (_Bool)0;
int var_5 = -2105578659;
unsigned short var_6 = (unsigned short)34497;
unsigned short var_7 = (unsigned short)19302;
long long int var_8 = -66440269032573913LL;
unsigned short var_9 = (unsigned short)23516;
long long int var_11 = 850103431734349035LL;
unsigned int var_12 = 2933895864U;
int zero = 0;
signed char var_13 = (signed char)-75;
int var_14 = 255122557;
unsigned int var_15 = 1071839034U;
unsigned char var_16 = (unsigned char)13;
short var_17 = (short)-21180;
signed char var_18 = (signed char)92;
signed char var_19 = (signed char)-50;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)116;
unsigned int var_22 = 4093096671U;
_Bool var_23 = (_Bool)1;
long long int arr_4 [18] ;
unsigned short arr_5 [18] [18] ;
unsigned int arr_6 [18] ;
unsigned short arr_9 [22] [22] ;
unsigned int arr_10 [22] ;
long long int arr_11 [22] ;
unsigned short arr_12 [22] ;
unsigned short arr_13 [19] ;
int arr_14 [19] ;
short arr_2 [10] [10] ;
short arr_3 [10] [10] ;
int arr_7 [18] [18] ;
signed char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -7993603325092356191LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)2442 : (unsigned short)61026;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1708472539U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)3515;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 873470328U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -2204706578563168516LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned short)42720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned short)47925;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = -993662772;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-12256;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)32534;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1044254174 : -1515589324;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)0 : (signed char)-19;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
