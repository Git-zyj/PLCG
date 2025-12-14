#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -483301178;
unsigned long long int var_1 = 9631467287327650969ULL;
unsigned short var_2 = (unsigned short)47326;
short var_3 = (short)-5420;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 2352268602187743375ULL;
int var_6 = -708003577;
int var_7 = 2056783568;
int var_8 = 742456361;
int zero = 0;
signed char var_10 = (signed char)-115;
unsigned int var_11 = 943605839U;
int var_12 = 615072474;
int var_13 = 1435347910;
unsigned long long int var_14 = 7753618250045046794ULL;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] ;
unsigned long long int arr_2 [15] [15] [15] ;
short arr_3 [15] ;
short arr_4 [15] [15] ;
int arr_7 [14] [14] ;
unsigned long long int arr_5 [15] ;
unsigned char arr_6 [15] ;
unsigned char arr_10 [14] ;
long long int arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 9658309538384146331ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4678830329563000215ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)2556;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)24183;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1126502137 : 1824547116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2333169750307171928ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -7247156554452468100LL : 3164547237826470390LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
