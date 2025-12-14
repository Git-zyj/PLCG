#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
long long int var_9 = 677671255662852967LL;
int zero = 0;
unsigned int var_12 = 1916843881U;
unsigned short var_13 = (unsigned short)60821;
unsigned long long int var_14 = 12512372451967175150ULL;
long long int var_15 = 978035351447315099LL;
signed char var_16 = (signed char)-21;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_9 [21] ;
unsigned char arr_11 [21] ;
signed char arr_12 [21] ;
unsigned long long int arr_3 [16] ;
_Bool arr_4 [16] ;
unsigned long long int arr_5 [16] [16] ;
long long int arr_6 [16] ;
signed char arr_10 [21] [21] ;
unsigned short arr_14 [21] [21] [21] ;
_Bool arr_17 [21] [21] ;
signed char arr_18 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 4041938855225767872ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 11309942402510544578ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 124734134293834506ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 11768567607531728045ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 3067879374170617982LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)22305;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (signed char)-14;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
