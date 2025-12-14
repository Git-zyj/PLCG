#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1949962621;
unsigned int var_1 = 905411320U;
unsigned short var_2 = (unsigned short)32808;
unsigned int var_3 = 1812640505U;
unsigned short var_5 = (unsigned short)43964;
unsigned short var_6 = (unsigned short)55853;
unsigned char var_7 = (unsigned char)243;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)36753;
unsigned short var_10 = (unsigned short)51138;
unsigned char var_11 = (unsigned char)113;
long long int var_12 = 3230703290662917930LL;
long long int var_13 = 2010473568849354578LL;
unsigned short var_14 = (unsigned short)31765;
int var_15 = -1376109810;
int zero = 0;
unsigned short var_16 = (unsigned short)5619;
unsigned char var_17 = (unsigned char)225;
long long int var_18 = 3046557336430325560LL;
unsigned short var_19 = (unsigned short)996;
int var_20 = 558810937;
unsigned char var_21 = (unsigned char)90;
long long int var_22 = -741273575277010847LL;
unsigned short var_23 = (unsigned short)1824;
unsigned short var_24 = (unsigned short)9161;
unsigned int var_25 = 3389908776U;
long long int var_26 = -7100885867762044466LL;
unsigned short var_27 = (unsigned short)25801;
unsigned int var_28 = 1915267005U;
unsigned short var_29 = (unsigned short)21531;
_Bool arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned short arr_2 [22] [22] ;
unsigned int arr_3 [22] [22] ;
unsigned short arr_4 [22] [22] ;
signed char arr_5 [22] [22] [22] [22] ;
unsigned short arr_6 [22] [22] [22] ;
int arr_8 [22] [22] ;
signed char arr_9 [22] [22] [22] ;
unsigned short arr_11 [22] [22] [22] ;
int arr_12 [22] ;
int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)10080;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)35201;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 3634610815U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)58800;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)9748;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = -1036080704;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)61603;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -614892617 : -854232884;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -604835941 : 1093208667;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
