#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8815414178689418814LL;
long long int var_2 = -7380058232567524071LL;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)157;
int var_7 = -1879349659;
unsigned short var_8 = (unsigned short)29510;
unsigned char var_9 = (unsigned char)234;
short var_10 = (short)-12795;
unsigned char var_12 = (unsigned char)138;
signed char var_13 = (signed char)85;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1577692463U;
short var_17 = (short)-25511;
long long int var_18 = 677410870669471461LL;
unsigned int var_19 = 2992299267U;
signed char var_20 = (signed char)86;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-99;
unsigned int var_23 = 2844759206U;
short var_24 = (short)-29716;
long long int var_25 = -8037948948055818645LL;
unsigned long long int var_26 = 12127518113245149409ULL;
_Bool arr_1 [21] [21] ;
signed char arr_4 [22] [22] ;
long long int arr_6 [22] ;
long long int arr_7 [22] ;
signed char arr_8 [22] [22] [22] ;
unsigned short arr_10 [22] [22] ;
_Bool arr_14 [15] [15] ;
unsigned short arr_5 [22] ;
unsigned char arr_12 [22] ;
unsigned long long int arr_17 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 6374152995376146625LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 6225037698324034993LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)9965;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9483 : (unsigned short)4750;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)63 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 10174441733221247250ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
