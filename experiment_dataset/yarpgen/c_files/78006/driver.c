#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12462;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)220;
long long int var_3 = 4067021657934354584LL;
short var_4 = (short)-1452;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)41;
_Bool var_7 = (_Bool)0;
short var_9 = (short)12897;
int zero = 0;
unsigned long long int var_10 = 2014789637009169485ULL;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)183;
long long int var_13 = -4194122039498833948LL;
unsigned char var_14 = (unsigned char)89;
int var_15 = -1157067096;
unsigned int var_16 = 2928526069U;
unsigned short var_17 = (unsigned short)31282;
unsigned char var_18 = (unsigned char)56;
unsigned short var_19 = (unsigned short)64873;
int arr_0 [18] [18] ;
_Bool arr_1 [18] ;
long long int arr_4 [18] ;
unsigned char arr_5 [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
signed char arr_7 [18] [18] ;
unsigned short arr_8 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -410679884;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -6731840043052722517LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)48324;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)38910;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
