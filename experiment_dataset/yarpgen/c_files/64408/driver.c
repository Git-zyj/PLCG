#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14623153966939140100ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-87;
unsigned char var_3 = (unsigned char)191;
unsigned char var_4 = (unsigned char)174;
signed char var_5 = (signed char)-3;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-119;
unsigned long long int var_8 = 3944317112087014480ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11919532669153036363ULL;
long long int var_12 = 3518570115608368999LL;
unsigned char var_13 = (unsigned char)172;
signed char var_14 = (signed char)61;
unsigned int var_15 = 1734522235U;
signed char var_16 = (signed char)-37;
unsigned char var_17 = (unsigned char)228;
unsigned char var_18 = (unsigned char)13;
unsigned long long int arr_0 [18] ;
short arr_1 [18] ;
long long int arr_2 [14] ;
_Bool arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 16940257399448743753ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)24764;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 8823641789548772686LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
