#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 2061555609643337604LL;
unsigned char var_3 = (unsigned char)255;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1787013944U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 15073046574699726983ULL;
long long int var_8 = 681331420365050144LL;
int var_9 = -1439213991;
int zero = 0;
unsigned int var_10 = 2007722362U;
unsigned char var_11 = (unsigned char)218;
unsigned long long int var_12 = 8936257882275567384ULL;
long long int var_13 = 5474732271705619990LL;
unsigned long long int var_14 = 13110083723396874256ULL;
int var_15 = -148281627;
int var_16 = -1253406592;
unsigned short var_17 = (unsigned short)44220;
signed char var_18 = (signed char)-123;
unsigned long long int var_19 = 17990345908689327717ULL;
int var_20 = 1549642317;
signed char arr_0 [16] [16] ;
unsigned long long int arr_3 [16] ;
unsigned int arr_5 [16] [16] [16] ;
short arr_6 [16] ;
unsigned short arr_7 [16] ;
int arr_12 [13] [13] ;
_Bool arr_14 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 727878586216815759ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3751047726U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (short)13387;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)53655;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = 710196452;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
