#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 12615546091848331545ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)161;
long long int var_8 = 792691725397015303LL;
long long int var_10 = 4087795449286947636LL;
unsigned char var_12 = (unsigned char)118;
signed char var_14 = (signed char)-33;
unsigned char var_15 = (unsigned char)222;
long long int var_16 = -6593129280300149637LL;
int zero = 0;
unsigned short var_19 = (unsigned short)15372;
unsigned char var_20 = (unsigned char)45;
unsigned long long int var_21 = 11093064965793588968ULL;
unsigned char var_22 = (unsigned char)227;
short var_23 = (short)-27425;
long long int var_24 = 3467940765808543145LL;
long long int var_25 = 7680312005647915427LL;
short var_26 = (short)30857;
_Bool arr_0 [22] ;
signed char arr_1 [22] ;
long long int arr_2 [22] [22] ;
long long int arr_3 [22] [22] ;
long long int arr_4 [22] [22] [22] [22] ;
unsigned char arr_5 [22] [22] [22] [22] ;
_Bool arr_8 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 219168878432783016LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 2173367742483626427LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = -3501703635692985002LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
