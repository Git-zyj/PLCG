#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 9243745220314637445ULL;
short var_3 = (short)26108;
long long int var_4 = 7645952211988560953LL;
unsigned long long int var_5 = 2795806507235243971ULL;
short var_6 = (short)-158;
unsigned char var_8 = (unsigned char)139;
unsigned short var_9 = (unsigned short)24292;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 6501888810896895869ULL;
unsigned int var_12 = 2679630837U;
long long int var_13 = -88118271364284128LL;
int var_14 = -2061799164;
unsigned char var_15 = (unsigned char)237;
unsigned int var_16 = 586903046U;
unsigned short var_17 = (unsigned short)46841;
unsigned char var_18 = (unsigned char)243;
int var_19 = -1601922882;
unsigned int var_20 = 4100542745U;
unsigned short var_21 = (unsigned short)1845;
int var_22 = -385211392;
signed char var_23 = (signed char)13;
long long int var_24 = -4692316917618475717LL;
signed char var_25 = (signed char)22;
_Bool arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
signed char arr_3 [10] [10] ;
unsigned long long int arr_4 [10] ;
unsigned short arr_5 [10] ;
_Bool arr_6 [10] [10] [10] ;
unsigned int arr_7 [10] [10] ;
unsigned long long int arr_8 [10] ;
unsigned short arr_10 [10] [10] [10] ;
long long int arr_13 [10] [10] ;
long long int arr_14 [10] ;
long long int arr_2 [22] ;
unsigned long long int arr_11 [10] ;
unsigned int arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)53349;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 4506508253063090989ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)51672;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 2327785600U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 17330363330490551651ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)14849;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = -7426582670092678728LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 7387152540442943671LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3037944466707202716LL : -1897695205195679728LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 3618841931890293665ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = 2853747082U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
