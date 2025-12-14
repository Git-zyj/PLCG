#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9178;
unsigned short var_5 = (unsigned short)64349;
unsigned long long int var_7 = 14181474448867941041ULL;
unsigned int var_8 = 925141017U;
unsigned long long int var_10 = 17854340808862056974ULL;
unsigned short var_11 = (unsigned short)53040;
unsigned char var_13 = (unsigned char)167;
int zero = 0;
int var_15 = -1883773852;
short var_16 = (short)26877;
int var_17 = -1306705574;
unsigned int var_18 = 956130414U;
_Bool var_19 = (_Bool)0;
short var_20 = (short)11850;
unsigned int var_21 = 4210210539U;
unsigned char arr_0 [19] ;
unsigned short arr_1 [19] ;
_Bool arr_3 [19] [19] ;
short arr_4 [19] [19] ;
signed char arr_2 [19] ;
unsigned short arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)63415;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-11406 : (short)-4329;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)42709 : (unsigned short)2824;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
