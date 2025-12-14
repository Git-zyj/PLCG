#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1522906345;
unsigned short var_1 = (unsigned short)4772;
unsigned char var_2 = (unsigned char)234;
short var_3 = (short)-12704;
int var_4 = 599951636;
int var_5 = -770005100;
unsigned char var_6 = (unsigned char)16;
long long int var_7 = 7636726535507327302LL;
short var_8 = (short)-27608;
short var_9 = (short)19783;
unsigned int var_10 = 4148902051U;
int zero = 0;
int var_11 = -389760127;
signed char var_12 = (signed char)41;
int var_13 = -1218625425;
signed char var_14 = (signed char)-123;
unsigned short var_15 = (unsigned short)47736;
unsigned int var_16 = 138600241U;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)187;
int var_19 = -1913649482;
long long int var_20 = -8134407014540847960LL;
unsigned long long int arr_2 [11] ;
long long int arr_4 [13] ;
unsigned char arr_5 [13] ;
unsigned long long int arr_6 [13] [13] ;
short arr_3 [11] ;
unsigned long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4743372145273180015ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -7825703641493900320LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 2014211498079594785ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-5212;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 17821418499021666813ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
