#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)94;
unsigned int var_4 = 486244421U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-92;
unsigned int var_9 = 3456360702U;
short var_11 = (short)19617;
unsigned int var_12 = 4025487166U;
unsigned int var_13 = 4070558449U;
long long int var_14 = 3667126454078694250LL;
int zero = 0;
unsigned short var_15 = (unsigned short)40193;
short var_16 = (short)14708;
unsigned short var_17 = (unsigned short)52327;
signed char var_18 = (signed char)-46;
signed char var_19 = (signed char)7;
signed char var_20 = (signed char)58;
unsigned short arr_0 [12] ;
short arr_1 [12] ;
signed char arr_5 [10] ;
unsigned int arr_7 [16] ;
signed char arr_8 [16] [16] ;
signed char arr_3 [12] ;
_Bool arr_4 [12] ;
int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31126 : (unsigned short)16157;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)130;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 3641276735U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)117 : (signed char)-68;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = -1452092477;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
