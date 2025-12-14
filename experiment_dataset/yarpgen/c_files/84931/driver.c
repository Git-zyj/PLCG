#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7744014020499867582LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 3226791958U;
unsigned char var_11 = (unsigned char)148;
unsigned char var_12 = (unsigned char)103;
short var_13 = (short)12904;
unsigned short var_14 = (unsigned short)13593;
unsigned int var_17 = 162550034U;
int zero = 0;
short var_18 = (short)28583;
signed char var_19 = (signed char)-10;
unsigned char var_20 = (unsigned char)68;
unsigned int var_21 = 3736377400U;
short var_22 = (short)32626;
unsigned long long int var_23 = 5028990322896511645ULL;
short arr_2 [17] ;
signed char arr_8 [24] ;
unsigned short arr_11 [19] ;
short arr_3 [17] [17] ;
signed char arr_6 [17] [17] ;
unsigned int arr_12 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)24932;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned short)58619;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-1792;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 712130840U : 977703909U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
