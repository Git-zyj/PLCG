#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2810215242U;
unsigned long long int var_2 = 3281172124740290915ULL;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_7 = (short)19214;
long long int var_8 = 7161768239162493460LL;
unsigned int var_10 = 2093288142U;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -6598225336957173827LL;
unsigned long long int var_13 = 13708191567452211034ULL;
unsigned int var_14 = 2451814255U;
unsigned long long int var_15 = 8428054432538972994ULL;
int var_16 = -1740681424;
unsigned int var_17 = 4236789106U;
_Bool var_18 = (_Bool)1;
long long int arr_1 [22] [22] ;
_Bool arr_2 [22] ;
long long int arr_3 [22] [22] [22] ;
unsigned int arr_4 [22] [22] [22] ;
unsigned long long int arr_8 [10] ;
unsigned long long int arr_5 [22] ;
_Bool arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -7979101231678822518LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3243617342631602428LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 517284610U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1189321160171624227ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 11104065312457257956ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
