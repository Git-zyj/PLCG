#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-24;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)41486;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 4888608957545628428ULL;
signed char var_18 = (signed char)126;
unsigned int var_19 = 3266885266U;
signed char var_20 = (signed char)116;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)96;
unsigned long long int var_23 = 1014150240297589303ULL;
unsigned short arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
_Bool arr_6 [10] ;
int arr_7 [10] ;
signed char arr_14 [21] ;
_Bool arr_3 [10] ;
_Bool arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)27875;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 2177709467U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1416443750 : 2100538404;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
