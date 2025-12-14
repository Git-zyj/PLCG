#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 917260134354924228ULL;
unsigned short var_1 = (unsigned short)32583;
unsigned short var_2 = (unsigned short)38836;
unsigned int var_3 = 2196996806U;
unsigned long long int var_4 = 4952839019673476308ULL;
unsigned short var_5 = (unsigned short)34250;
int var_6 = 1863476674;
long long int var_7 = 113576148654990034LL;
int var_8 = -601385287;
unsigned long long int var_9 = 16943147293991613867ULL;
short var_10 = (short)-9685;
unsigned char var_14 = (unsigned char)39;
short var_15 = (short)17951;
int zero = 0;
unsigned int var_16 = 1576940714U;
signed char var_17 = (signed char)10;
unsigned short var_18 = (unsigned short)26443;
unsigned long long int var_19 = 344561164277453098ULL;
unsigned long long int var_20 = 12642795306416677099ULL;
int var_21 = -386300179;
unsigned char var_22 = (unsigned char)64;
unsigned int var_23 = 408447730U;
int var_24 = 2035614525;
unsigned short var_25 = (unsigned short)164;
unsigned int arr_0 [13] ;
int arr_1 [13] ;
int arr_2 [13] [13] ;
unsigned int arr_3 [13] [13] ;
int arr_5 [13] [13] ;
signed char arr_6 [13] [13] ;
short arr_9 [20] [20] ;
int arr_10 [20] ;
_Bool arr_11 [20] ;
unsigned long long int arr_13 [15] ;
short arr_14 [15] ;
unsigned int arr_15 [15] ;
unsigned char arr_16 [15] ;
unsigned short arr_4 [13] [13] ;
signed char arr_7 [13] ;
signed char arr_8 [13] ;
short arr_12 [20] ;
short arr_17 [15] ;
unsigned short arr_21 [14] ;
unsigned short arr_22 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 3717162345U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 986140524;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -1550025518;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 3015876897U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 3369970;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-87 : (signed char)-2;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (short)16708;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -833287841;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 12546852091016836694ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (short)-12524;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 3368949827U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)2559;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)-112;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (short)26340;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (short)-16915;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = (unsigned short)62571;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (unsigned short)58763;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
