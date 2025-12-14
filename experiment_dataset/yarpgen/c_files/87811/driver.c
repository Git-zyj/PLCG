#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned long long int var_2 = 17916893317999384518ULL;
unsigned short var_3 = (unsigned short)54765;
unsigned short var_4 = (unsigned short)38576;
signed char var_5 = (signed char)-66;
unsigned char var_6 = (unsigned char)179;
signed char var_7 = (signed char)-30;
unsigned long long int var_9 = 15495332416619605816ULL;
unsigned char var_10 = (unsigned char)21;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)45037;
unsigned int var_16 = 2004684739U;
signed char var_17 = (signed char)72;
long long int var_18 = -9020195458614153421LL;
unsigned short var_19 = (unsigned short)38227;
unsigned char var_20 = (unsigned char)85;
unsigned short var_21 = (unsigned short)20237;
int var_22 = -319519958;
unsigned short arr_0 [19] ;
_Bool arr_1 [19] ;
unsigned long long int arr_2 [19] [19] [19] ;
_Bool arr_4 [19] [19] [19] ;
signed char arr_5 [19] [19] [19] ;
signed char arr_6 [19] [19] ;
unsigned int arr_7 [19] [19] [19] ;
_Bool arr_10 [24] [24] ;
int arr_11 [24] ;
unsigned short arr_12 [24] ;
unsigned long long int arr_13 [24] ;
_Bool arr_16 [20] ;
unsigned long long int arr_17 [20] ;
short arr_18 [20] [20] ;
unsigned long long int arr_22 [16] ;
int arr_8 [19] [19] [19] ;
_Bool arr_9 [19] [19] [19] ;
unsigned long long int arr_14 [24] ;
unsigned char arr_19 [20] ;
unsigned short arr_20 [20] ;
long long int arr_27 [16] ;
unsigned int arr_28 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30991 : (unsigned short)38318;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 7634608045326914076ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-21 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1533216689U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 576786862 : 738759029;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned short)24328;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 14628212221994159066ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = 15024584882169244747ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (short)-2601;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 6497463968502681712ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1583953542 : -261096540;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 13807896312199985637ULL : 3400436042148856121ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43262 : (unsigned short)47464;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = 8423169967881364389LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = 4209063559U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
