#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5908;
unsigned char var_1 = (unsigned char)23;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3805122720U;
_Bool var_9 = (_Bool)1;
long long int var_10 = -3998535347977833895LL;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)235;
unsigned short var_16 = (unsigned short)62931;
signed char var_19 = (signed char)-92;
int zero = 0;
signed char var_20 = (signed char)-41;
unsigned int var_21 = 2797294628U;
long long int var_22 = 6199328583928831261LL;
unsigned short var_23 = (unsigned short)26873;
int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned int arr_3 [18] ;
_Bool arr_2 [18] [18] ;
unsigned long long int arr_5 [18] ;
int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 331908669;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 10594715054000286829ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1706813729U : 3606582611U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15900158060793853979ULL : 12764409872539942394ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 973909228 : -1994709958;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
