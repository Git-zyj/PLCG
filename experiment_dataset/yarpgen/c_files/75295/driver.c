#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
int var_2 = -311712038;
long long int var_3 = -4752748474527215278LL;
unsigned int var_4 = 2516502013U;
_Bool var_5 = (_Bool)0;
long long int var_6 = -2028138870161865156LL;
int var_7 = -552027667;
signed char var_8 = (signed char)25;
unsigned char var_9 = (unsigned char)201;
int var_10 = 1817565386;
short var_11 = (short)-10661;
int var_14 = 106906668;
int zero = 0;
long long int var_15 = -3468744447087646789LL;
unsigned int var_16 = 3033976561U;
unsigned char var_17 = (unsigned char)32;
short var_18 = (short)5707;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7264871776950195098LL;
short var_21 = (short)4583;
int var_22 = -410632250;
int var_23 = -1961561487;
long long int var_24 = 6548523856703953538LL;
short var_25 = (short)3674;
int var_26 = -1030281418;
unsigned short var_27 = (unsigned short)22198;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
int var_30 = 1522607769;
long long int arr_12 [10] ;
int arr_16 [10] [10] ;
unsigned int arr_19 [10] ;
unsigned char arr_22 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -7122569256722113992LL : 1876403236085918144LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = 109484972;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 339408366U : 3106759774U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (unsigned char)49;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
