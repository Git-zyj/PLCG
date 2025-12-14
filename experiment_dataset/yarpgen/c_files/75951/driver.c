#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43701;
short var_2 = (short)-27177;
unsigned short var_3 = (unsigned short)13315;
unsigned char var_4 = (unsigned char)63;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3060569019U;
short var_9 = (short)17191;
short var_10 = (short)-9640;
int zero = 0;
short var_12 = (short)17742;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)208;
short var_15 = (short)-9451;
unsigned short var_16 = (unsigned short)26824;
signed char var_17 = (signed char)-83;
unsigned long long int arr_2 [11] ;
short arr_3 [11] [11] ;
_Bool arr_6 [17] ;
unsigned long long int arr_7 [17] [17] ;
short arr_10 [12] [12] ;
unsigned int arr_11 [12] ;
signed char arr_4 [11] ;
int arr_5 [11] ;
unsigned short arr_8 [17] ;
long long int arr_9 [17] [17] ;
unsigned short arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7122918312984046611ULL : 16573679050144151009ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-22563;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 8778250344766905458ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (short)24468;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 3022095680U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)27 : (signed char)-92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -597309425 : -1086916972;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)13594;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = -3727416588101511722LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)705;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
