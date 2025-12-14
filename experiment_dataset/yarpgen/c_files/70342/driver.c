#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5125207552533476838LL;
unsigned short var_5 = (unsigned short)39703;
unsigned char var_7 = (unsigned char)80;
unsigned char var_8 = (unsigned char)151;
unsigned char var_11 = (unsigned char)58;
unsigned long long int var_13 = 1454298475481044972ULL;
unsigned char var_14 = (unsigned char)232;
unsigned long long int var_15 = 5942452976128261412ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)23192;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3833455369313741783LL;
signed char var_21 = (signed char)63;
signed char var_22 = (signed char)-42;
unsigned long long int var_23 = 17356524452492979799ULL;
unsigned short var_24 = (unsigned short)50494;
unsigned char var_25 = (unsigned char)209;
signed char arr_0 [20] ;
int arr_1 [20] [20] ;
signed char arr_4 [23] ;
unsigned short arr_2 [20] ;
short arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -1635164482;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)33753;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-12527 : (short)-6935;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
