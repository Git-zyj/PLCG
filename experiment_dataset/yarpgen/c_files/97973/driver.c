#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3642901367U;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-69;
unsigned long long int var_3 = 5819735196794574711ULL;
unsigned long long int var_5 = 9292422633535857884ULL;
unsigned short var_9 = (unsigned short)4747;
int zero = 0;
unsigned short var_10 = (unsigned short)61285;
signed char var_11 = (signed char)49;
short var_12 = (short)16481;
signed char var_13 = (signed char)44;
unsigned int var_14 = 1957211233U;
int var_15 = 1077004438;
_Bool var_16 = (_Bool)1;
_Bool arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
unsigned short arr_4 [18] ;
signed char arr_5 [18] [18] ;
_Bool arr_6 [18] ;
unsigned long long int arr_3 [18] ;
signed char arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)18160;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 10215876663917769610ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)123;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
