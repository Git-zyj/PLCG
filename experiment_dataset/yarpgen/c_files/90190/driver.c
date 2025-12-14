#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
int var_1 = -2024024942;
unsigned int var_2 = 2944789541U;
unsigned short var_4 = (unsigned short)53768;
short var_5 = (short)3616;
short var_7 = (short)-30465;
signed char var_8 = (signed char)-36;
long long int var_10 = 5150584869072038637LL;
long long int var_11 = 7418148646113351658LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)2707;
unsigned int var_15 = 4214833443U;
unsigned int var_16 = 2575037956U;
int var_17 = 1451111571;
int zero = 0;
short var_18 = (short)-30603;
int var_19 = -1294975284;
short var_20 = (short)-12388;
short var_21 = (short)-22784;
unsigned char var_22 = (unsigned char)48;
unsigned long long int var_23 = 18036315194491128100ULL;
unsigned int var_24 = 1709500786U;
long long int arr_2 [18] ;
short arr_5 [18] [18] ;
unsigned int arr_8 [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] ;
unsigned int arr_11 [18] ;
signed char arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 8962151759323702677LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-24817;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 1025901999U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 6667282432392101051ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2821042057U : 3652898595U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-92 : (signed char)40;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
