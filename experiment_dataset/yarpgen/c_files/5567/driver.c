#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1036166674U;
signed char var_3 = (signed char)-3;
unsigned int var_4 = 2979433947U;
long long int var_5 = -6014817276329063960LL;
unsigned int var_9 = 3764174716U;
unsigned int var_10 = 3430748150U;
int var_11 = -1664218823;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7341384163645983520LL;
unsigned short var_14 = (unsigned short)5107;
unsigned short var_16 = (unsigned short)39023;
int var_17 = 1708971820;
unsigned long long int var_18 = 14522414821553443011ULL;
long long int var_19 = -1562243490945606239LL;
int zero = 0;
long long int var_20 = 1362769086669598475LL;
unsigned long long int var_21 = 16548133684579959209ULL;
unsigned char var_22 = (unsigned char)143;
unsigned int var_23 = 1285891508U;
unsigned long long int var_24 = 8803377956194716395ULL;
unsigned short var_25 = (unsigned short)12934;
unsigned int arr_1 [11] ;
unsigned long long int arr_10 [11] ;
unsigned int arr_11 [11] [11] ;
int arr_12 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1080168205U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 4793408022110312116ULL : 9306952435016511157ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 1569214561U : 3512911340U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -274556552 : 1826790057;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
