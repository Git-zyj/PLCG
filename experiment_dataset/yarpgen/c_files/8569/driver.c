#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3516555379863674220ULL;
long long int var_3 = 2502104717233891448LL;
unsigned short var_4 = (unsigned short)19724;
unsigned short var_5 = (unsigned short)23641;
short var_6 = (short)-8186;
long long int var_9 = -4129827734082506613LL;
unsigned char var_13 = (unsigned char)105;
int zero = 0;
unsigned short var_17 = (unsigned short)792;
signed char var_18 = (signed char)14;
short var_19 = (short)25082;
short var_20 = (short)6061;
long long int var_21 = -4622459243689869374LL;
long long int var_22 = 6742411310243301614LL;
long long int var_23 = 909327267096344470LL;
unsigned long long int var_24 = 14418856891417276222ULL;
long long int var_25 = -5926097083374302045LL;
unsigned char arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned long long int arr_2 [14] [14] ;
short arr_4 [14] [14] [14] ;
long long int arr_5 [14] [14] ;
short arr_6 [16] ;
_Bool arr_7 [16] ;
int arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 30148093U : 228180832U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 7725732145733871170ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-25799;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 3750363833025420292LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-32578 : (short)10595;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = -706397977;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
