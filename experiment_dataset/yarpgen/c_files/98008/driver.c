#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 3795727027980768356LL;
short var_4 = (short)28460;
signed char var_5 = (signed char)-46;
long long int var_7 = -2417301806001320889LL;
short var_9 = (short)-22334;
unsigned long long int var_11 = 16234086568682070023ULL;
signed char var_14 = (signed char)124;
signed char var_15 = (signed char)-87;
unsigned short var_17 = (unsigned short)17398;
int zero = 0;
unsigned short var_18 = (unsigned short)61922;
unsigned long long int var_19 = 15691573923180373690ULL;
signed char var_20 = (signed char)66;
unsigned char var_21 = (unsigned char)6;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)44;
long long int arr_0 [24] [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned long long int arr_6 [24] ;
short arr_7 [24] [24] ;
short arr_13 [24] ;
unsigned int arr_14 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 5528381163688484803LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6648480769968255662ULL : 3351080937972476824ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 13684870560808431432ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-5196 : (short)-28823;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)-27260 : (short)7034;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 3864326695U : 4170509351U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
