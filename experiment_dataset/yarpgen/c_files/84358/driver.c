#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned long long int var_2 = 14254045503284447377ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)42;
unsigned int var_9 = 866509603U;
unsigned int var_10 = 130943273U;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)171;
int var_16 = 787658570;
int zero = 0;
unsigned long long int var_17 = 3701655691694139214ULL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)95;
unsigned int var_22 = 1268843074U;
unsigned int var_23 = 798354762U;
signed char arr_0 [13] [13] ;
unsigned char arr_4 [13] [13] ;
unsigned long long int arr_9 [13] ;
_Bool arr_2 [13] [13] ;
_Bool arr_3 [13] [13] ;
_Bool arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 14765116734654075772ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
