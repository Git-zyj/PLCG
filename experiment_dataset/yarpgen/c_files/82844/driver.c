#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1662570174U;
unsigned char var_1 = (unsigned char)118;
unsigned short var_2 = (unsigned short)23543;
signed char var_3 = (signed char)80;
long long int var_4 = 6437113240232182764LL;
unsigned int var_5 = 2086526486U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-100;
signed char var_8 = (signed char)-83;
unsigned char var_9 = (unsigned char)99;
unsigned char var_10 = (unsigned char)63;
unsigned short var_11 = (unsigned short)55571;
unsigned char var_12 = (unsigned char)213;
signed char var_13 = (signed char)53;
unsigned char var_14 = (unsigned char)15;
unsigned short var_15 = (unsigned short)36073;
long long int var_16 = 7252484474465513454LL;
unsigned char var_17 = (unsigned char)100;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)106;
unsigned char var_20 = (unsigned char)73;
unsigned short var_21 = (unsigned short)61780;
long long int var_22 = -7777701870687536326LL;
_Bool var_23 = (_Bool)0;
long long int arr_0 [10] ;
unsigned short arr_1 [10] ;
unsigned char arr_2 [12] ;
unsigned short arr_3 [12] ;
signed char arr_4 [12] ;
long long int arr_5 [12] [12] ;
unsigned char arr_7 [12] ;
unsigned char arr_8 [12] [12] ;
signed char arr_9 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1487060830446261113LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)10805;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)64146;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 1797269649924000946LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-10;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
