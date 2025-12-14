#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3158933300U;
long long int var_2 = -9071504008930448019LL;
unsigned int var_3 = 2677579764U;
int var_4 = -1880174870;
signed char var_7 = (signed char)59;
unsigned int var_13 = 27775717U;
int zero = 0;
signed char var_14 = (signed char)52;
unsigned int var_15 = 3708138336U;
unsigned char var_16 = (unsigned char)244;
unsigned char var_17 = (unsigned char)8;
int var_18 = 23331971;
signed char var_19 = (signed char)34;
unsigned char arr_6 [22] ;
unsigned char arr_8 [22] ;
unsigned char arr_11 [22] [22] ;
int arr_13 [22] ;
signed char arr_14 [22] ;
unsigned short arr_15 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -1800701575 : 744674776;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)22391;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
