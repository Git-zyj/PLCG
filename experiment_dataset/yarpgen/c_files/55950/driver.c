#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8271489615532678139LL;
short var_1 = (short)15879;
short var_2 = (short)-18606;
unsigned short var_3 = (unsigned short)1399;
unsigned long long int var_4 = 1724760258082834688ULL;
long long int var_5 = 9117741904878771260LL;
signed char var_6 = (signed char)46;
unsigned char var_7 = (unsigned char)178;
unsigned int var_8 = 1731305551U;
unsigned int var_9 = 3533014475U;
int zero = 0;
long long int var_10 = 9026547950880139318LL;
signed char var_11 = (signed char)-62;
long long int var_12 = 1282004362472026099LL;
_Bool var_13 = (_Bool)1;
int var_14 = -798480280;
signed char var_15 = (signed char)-8;
_Bool var_16 = (_Bool)0;
short var_17 = (short)21059;
unsigned short var_18 = (unsigned short)43819;
signed char var_19 = (signed char)-120;
unsigned short var_20 = (unsigned short)2212;
int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned int arr_3 [18] ;
long long int arr_6 [13] ;
unsigned long long int arr_7 [13] ;
unsigned short arr_8 [13] [13] [13] ;
long long int arr_9 [13] ;
signed char arr_13 [13] [13] ;
_Bool arr_18 [13] ;
unsigned short arr_20 [12] ;
int arr_21 [12] ;
long long int arr_4 [18] ;
unsigned short arr_5 [18] ;
unsigned int arr_11 [13] [13] ;
unsigned char arr_14 [13] [13] ;
short arr_15 [13] [13] ;
_Bool arr_19 [13] [13] ;
unsigned char arr_24 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 2123446383;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 16711797688242980893ULL : 13259989961807527591ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2511899155U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 1307818615173132627LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 16203358236494027938ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)8513 : (unsigned short)58827;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 5111960599204070085LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41444 : (unsigned short)4047;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1456663294 : -176466421;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -6226814658078189813LL : -7974100831574858833LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64635 : (unsigned short)19416;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 634933871U : 4104780554U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (short)10281;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)28 : (unsigned char)122;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
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
