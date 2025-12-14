#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1901138884;
unsigned char var_3 = (unsigned char)136;
int var_8 = 236313081;
unsigned int var_9 = 3676265737U;
int zero = 0;
unsigned char var_10 = (unsigned char)64;
unsigned int var_11 = 378750359U;
unsigned short var_12 = (unsigned short)37094;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2652458130141025812LL;
long long int var_15 = -3111526428903428989LL;
unsigned int var_16 = 1143408700U;
unsigned int var_17 = 4283989437U;
_Bool arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
unsigned char arr_4 [19] [19] ;
unsigned short arr_5 [19] ;
unsigned short arr_6 [19] ;
unsigned long long int arr_7 [19] ;
long long int arr_8 [19] ;
_Bool arr_9 [19] ;
unsigned int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 848131343U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 14801843572832940590ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)17333;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)15542;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 9075979853668827272ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 8699291150939825289LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2451428133U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
