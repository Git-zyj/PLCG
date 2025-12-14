#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31639;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-115;
unsigned short var_3 = (unsigned short)50750;
unsigned char var_4 = (unsigned char)87;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)11205;
unsigned short var_7 = (unsigned short)57883;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)85;
unsigned char var_12 = (unsigned char)210;
long long int var_14 = -5309136622312982353LL;
int zero = 0;
unsigned long long int var_16 = 10284774450331723072ULL;
unsigned short var_17 = (unsigned short)29895;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)51636;
signed char var_21 = (signed char)105;
unsigned short var_22 = (unsigned short)14129;
unsigned short var_23 = (unsigned short)29806;
unsigned short var_24 = (unsigned short)47721;
unsigned int var_25 = 2764452557U;
unsigned long long int var_26 = 11199403535762629133ULL;
unsigned short arr_0 [24] ;
unsigned short arr_1 [24] ;
unsigned char arr_3 [17] ;
_Bool arr_2 [24] ;
_Bool arr_5 [17] ;
unsigned char arr_8 [24] ;
unsigned short arr_9 [24] [24] ;
unsigned long long int arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)57086;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)31379;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)65353;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 4051389004316805678ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
