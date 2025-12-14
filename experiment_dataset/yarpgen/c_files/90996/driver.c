#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25288;
short var_1 = (short)-3119;
unsigned short var_2 = (unsigned short)8690;
short var_3 = (short)17958;
signed char var_4 = (signed char)-6;
unsigned short var_5 = (unsigned short)14080;
signed char var_6 = (signed char)12;
short var_7 = (short)-5632;
unsigned int var_8 = 3273442887U;
unsigned short var_9 = (unsigned short)31511;
signed char var_10 = (signed char)-69;
unsigned long long int var_11 = 14008244762560447652ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 2094259336;
int zero = 0;
int var_14 = 758924759;
unsigned short var_15 = (unsigned short)25915;
int var_16 = -1879237214;
unsigned long long int var_17 = 12657792267230686445ULL;
long long int var_18 = -3060890272520206536LL;
signed char var_19 = (signed char)-13;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2630489241U;
int var_22 = 1178062937;
_Bool var_23 = (_Bool)1;
unsigned char arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
int arr_3 [22] [22] ;
long long int arr_4 [22] [22] ;
signed char arr_5 [22] ;
long long int arr_7 [22] ;
_Bool arr_8 [22] [22] ;
unsigned long long int arr_10 [22] [22] ;
_Bool arr_11 [22] ;
short arr_12 [22] ;
_Bool arr_13 [22] ;
signed char arr_2 [25] [25] ;
unsigned long long int arr_6 [22] [22] ;
unsigned long long int arr_9 [22] ;
unsigned char arr_14 [22] ;
short arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 16359753415103821482ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -1536248212;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -3278731451009461724LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 7339768505080539278LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 2051112544196672559ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (short)30783;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 7248384174630158856ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 14071801393073545543ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)7765;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
