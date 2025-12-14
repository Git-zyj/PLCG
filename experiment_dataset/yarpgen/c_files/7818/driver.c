#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4442667256634935561LL;
unsigned int var_1 = 1916130507U;
unsigned char var_2 = (unsigned char)205;
unsigned long long int var_4 = 2722172248017988331ULL;
_Bool var_5 = (_Bool)0;
int var_6 = 132156831;
int var_8 = -1500143827;
unsigned short var_9 = (unsigned short)17538;
unsigned int var_10 = 1675949752U;
unsigned int var_12 = 2955998027U;
int var_13 = 2011941009;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2111811256U;
unsigned short var_16 = (unsigned short)39035;
int zero = 0;
unsigned int var_18 = 2884777906U;
int var_19 = -1764048471;
long long int var_20 = -1792205619670184200LL;
_Bool var_21 = (_Bool)1;
int var_22 = -1398703176;
short var_23 = (short)-13875;
long long int var_24 = 5762045489763212025LL;
unsigned char var_25 = (unsigned char)19;
short var_26 = (short)7228;
unsigned int arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned long long int arr_3 [13] ;
unsigned int arr_4 [13] ;
unsigned char arr_5 [13] ;
unsigned long long int arr_7 [17] [17] ;
int arr_8 [17] [17] ;
signed char arr_11 [12] [12] ;
unsigned int arr_12 [12] ;
unsigned long long int arr_6 [13] ;
int arr_10 [17] [17] ;
unsigned long long int arr_23 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_24 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1970334546U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1175355823212386966ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1745953694U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 499743098986435506ULL : 6593017749961655692ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 847792760 : -1508369548;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 4293269272U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 2043759706679685190ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 2080580113 : -1818808407;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 11900227887873245966ULL : 16249975339050717879ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 2782444749U : 882183285U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
