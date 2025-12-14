#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 1951725117053921851LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10106163140247809075ULL;
short var_5 = (short)-22909;
unsigned char var_7 = (unsigned char)20;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-26532;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 2968902970985726939ULL;
int var_14 = 953956997;
short var_16 = (short)-27679;
int zero = 0;
signed char var_17 = (signed char)-72;
signed char var_18 = (signed char)55;
int var_19 = 1827683081;
unsigned int var_20 = 3365219063U;
unsigned int var_21 = 2696086506U;
unsigned short var_22 = (unsigned short)3908;
_Bool arr_0 [22] ;
unsigned char arr_2 [22] [22] [22] ;
unsigned char arr_8 [10] ;
int arr_9 [10] ;
_Bool arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = -798830524;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
