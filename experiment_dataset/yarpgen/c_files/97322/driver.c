#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25248;
unsigned short var_1 = (unsigned short)61453;
int var_4 = 104555290;
unsigned short var_5 = (unsigned short)8232;
int var_6 = 953852749;
unsigned long long int var_10 = 4526154856318525707ULL;
unsigned long long int var_12 = 16804722078746426917ULL;
int var_13 = 2048867906;
int var_14 = 842925517;
unsigned char var_15 = (unsigned char)81;
int zero = 0;
unsigned int var_18 = 3501193563U;
unsigned char var_19 = (unsigned char)130;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)18993;
signed char var_22 = (signed char)69;
unsigned long long int var_23 = 17554324152244856399ULL;
unsigned int var_24 = 4003020797U;
unsigned char arr_0 [16] [16] ;
_Bool arr_1 [16] [16] ;
unsigned char arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned short arr_4 [25] ;
_Bool arr_5 [25] [25] ;
unsigned int arr_6 [25] [25] ;
int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 12790423611877485783ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)41533;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 2513659415U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 1155791030;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
