#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26165;
unsigned short var_1 = (unsigned short)41464;
short var_3 = (short)32036;
long long int var_5 = -4707063002322100185LL;
unsigned short var_8 = (unsigned short)25480;
short var_9 = (short)13677;
unsigned int var_10 = 4154751521U;
signed char var_12 = (signed char)105;
unsigned long long int var_14 = 12436978573179669109ULL;
unsigned int var_15 = 3173905494U;
short var_17 = (short)-17815;
unsigned short var_18 = (unsigned short)2620;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)16876;
signed char var_22 = (signed char)-49;
unsigned short var_23 = (unsigned short)28371;
unsigned short var_24 = (unsigned short)5153;
unsigned int var_25 = 1440693378U;
unsigned long long int var_26 = 6092100196563337588ULL;
_Bool var_27 = (_Bool)0;
short arr_0 [10] ;
long long int arr_1 [10] ;
unsigned int arr_4 [12] ;
unsigned short arr_5 [12] ;
signed char arr_6 [12] ;
unsigned int arr_2 [10] [10] ;
short arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-7648;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -3641368944456503229LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1451322221U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)38802;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 874133680U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-20264 : (short)12711;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
