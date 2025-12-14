#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)55111;
unsigned long long int var_2 = 8350450651521122286ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)16841;
unsigned long long int var_5 = 15388720859367494472ULL;
short var_6 = (short)29847;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)13;
unsigned int var_12 = 17249401U;
unsigned long long int var_13 = 2923776151152854895ULL;
int zero = 0;
unsigned long long int var_14 = 8955922482611455097ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)11533;
signed char var_18 = (signed char)0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16557061190190370020ULL;
signed char var_21 = (signed char)59;
unsigned long long int var_22 = 13729041365011134336ULL;
signed char arr_0 [22] [22] ;
unsigned short arr_1 [22] ;
_Bool arr_2 [22] ;
unsigned int arr_3 [22] [22] [22] ;
_Bool arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-75 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)28545;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4158468674U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
