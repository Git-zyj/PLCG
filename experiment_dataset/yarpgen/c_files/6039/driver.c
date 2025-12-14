#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -835819635;
unsigned short var_3 = (unsigned short)44569;
signed char var_4 = (signed char)108;
int var_7 = 1302118539;
int var_8 = -761456428;
unsigned short var_9 = (unsigned short)44656;
unsigned long long int var_11 = 7193897418683686005ULL;
int var_12 = 591274541;
unsigned char var_13 = (unsigned char)24;
unsigned short var_14 = (unsigned short)63607;
unsigned char var_15 = (unsigned char)212;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 8751299039334433469LL;
unsigned char var_21 = (unsigned char)58;
unsigned long long int var_22 = 8754188075830367302ULL;
unsigned long long int var_23 = 18385661989275488662ULL;
unsigned char var_24 = (unsigned char)223;
unsigned char arr_2 [18] [18] ;
signed char arr_4 [18] ;
unsigned int arr_5 [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
unsigned char arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 208068054U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 2731925206675035090ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)64;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
