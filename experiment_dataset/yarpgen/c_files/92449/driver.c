#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10505775410972257256ULL;
int var_2 = -902693438;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 497079195U;
_Bool var_5 = (_Bool)0;
int var_6 = -529909594;
unsigned char var_7 = (unsigned char)24;
unsigned char var_8 = (unsigned char)143;
int zero = 0;
short var_10 = (short)-30285;
unsigned int var_11 = 1018416800U;
short var_12 = (short)-29080;
signed char var_13 = (signed char)52;
_Bool var_14 = (_Bool)1;
short var_15 = (short)10186;
int var_16 = 1578315025;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)190;
unsigned int var_19 = 3509660801U;
unsigned long long int var_20 = 8439221351905923461ULL;
unsigned long long int arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned long long int arr_3 [17] [17] ;
short arr_5 [13] [13] ;
long long int arr_10 [14] [14] ;
_Bool arr_4 [17] [17] ;
short arr_8 [13] ;
long long int arr_9 [13] ;
short arr_12 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 12458393407636547395ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 17470132773892622461ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-22456;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 635355478724074120LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)28195;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 8855749638999344864LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (short)21147;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
