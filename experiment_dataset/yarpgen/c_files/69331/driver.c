#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)122;
long long int var_6 = -1128480668185186637LL;
short var_8 = (short)-17666;
unsigned char var_11 = (unsigned char)56;
unsigned short var_12 = (unsigned short)36837;
short var_13 = (short)-8901;
signed char var_14 = (signed char)12;
unsigned char var_15 = (unsigned char)88;
long long int var_16 = 305700794639209615LL;
unsigned int var_17 = 1189524709U;
int zero = 0;
signed char var_19 = (signed char)-44;
unsigned int var_20 = 1177693471U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 783661448U;
int var_24 = -2038742093;
unsigned int var_25 = 333691173U;
long long int var_26 = 6922239342605025345LL;
unsigned long long int var_27 = 7389859114663134481ULL;
unsigned char arr_1 [24] ;
unsigned short arr_3 [24] ;
short arr_6 [24] ;
long long int arr_9 [24] ;
unsigned long long int arr_5 [24] ;
unsigned short arr_8 [24] [24] ;
signed char arr_13 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55017 : (unsigned short)6928;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)13400;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -5215305139659534380LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 12768907446682324279ULL : 4498016537615073679ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)42221 : (unsigned short)5630;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-55;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
