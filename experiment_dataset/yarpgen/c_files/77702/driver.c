#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 14338548U;
short var_2 = (short)-1308;
unsigned int var_4 = 680608342U;
signed char var_5 = (signed char)25;
unsigned char var_6 = (unsigned char)115;
unsigned char var_14 = (unsigned char)142;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 474051257769005791ULL;
int zero = 0;
unsigned long long int var_18 = 6126258025710696475ULL;
long long int var_19 = -5107747668836113178LL;
unsigned int var_20 = 1442191282U;
short var_21 = (short)25408;
int var_22 = -2092207989;
unsigned char var_23 = (unsigned char)201;
unsigned long long int var_24 = 8678833743554042051ULL;
unsigned char var_25 = (unsigned char)227;
unsigned long long int var_26 = 6054284652632112759ULL;
unsigned char var_27 = (unsigned char)121;
unsigned char arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned char arr_2 [19] ;
unsigned long long int arr_3 [19] ;
signed char arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
signed char arr_9 [10] ;
unsigned char arr_4 [19] [19] ;
unsigned short arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 11589963499868910685ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 7857089243336357996ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 17241883734782723454ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)33959;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
