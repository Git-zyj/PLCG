#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3483;
unsigned char var_2 = (unsigned char)122;
long long int var_3 = -9185468446012540179LL;
long long int var_5 = -3862852558715078338LL;
unsigned int var_10 = 3654205086U;
long long int var_11 = 6573265212748284198LL;
unsigned char var_12 = (unsigned char)195;
short var_13 = (short)1412;
unsigned short var_14 = (unsigned short)51652;
_Bool var_15 = (_Bool)1;
int var_16 = -528003531;
_Bool var_17 = (_Bool)1;
unsigned char var_19 = (unsigned char)91;
int zero = 0;
long long int var_20 = 7494686314449556023LL;
unsigned long long int var_21 = 16681392594954598713ULL;
short var_22 = (short)-8522;
unsigned long long int var_23 = 1613166199083730506ULL;
short var_24 = (short)7602;
_Bool var_25 = (_Bool)1;
long long int var_26 = -1263705610666938198LL;
unsigned long long int arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
_Bool arr_2 [13] ;
unsigned int arr_3 [13] [13] ;
_Bool arr_5 [13] [13] ;
unsigned char arr_6 [13] [13] ;
long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3523504234582136533ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3498878510U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 1413434028U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 3227709937283245456LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
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
