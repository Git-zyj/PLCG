#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8561;
unsigned int var_2 = 3789996434U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 522079674U;
int zero = 0;
unsigned short var_12 = (unsigned short)24378;
unsigned short var_13 = (unsigned short)38735;
unsigned int var_14 = 2135173261U;
unsigned int var_15 = 2153542417U;
signed char var_16 = (signed char)-72;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)36516;
short arr_0 [22] ;
signed char arr_3 [22] [22] [22] ;
int arr_4 [22] ;
unsigned short arr_2 [22] ;
unsigned int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-18388;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 228740310;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)10057;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 3108697498U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
