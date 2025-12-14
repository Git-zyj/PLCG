#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28575;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_7 = -5099734175200929329LL;
signed char var_8 = (signed char)17;
unsigned short var_9 = (unsigned short)32054;
unsigned short var_11 = (unsigned short)55801;
int zero = 0;
unsigned long long int var_15 = 12871351072567962021ULL;
signed char var_16 = (signed char)24;
long long int var_17 = -1667843014045948686LL;
int var_18 = 229173758;
short var_19 = (short)-1413;
signed char var_20 = (signed char)-8;
int var_21 = 262712950;
long long int var_22 = -3462910005519361865LL;
long long int arr_0 [15] ;
signed char arr_1 [15] ;
unsigned long long int arr_5 [18] ;
unsigned int arr_6 [18] [18] ;
_Bool arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1324165852748500744LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 2275098225532784953ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 323959077U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
