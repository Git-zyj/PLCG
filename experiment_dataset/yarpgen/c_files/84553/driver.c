#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9156;
long long int var_1 = 6468590773459778937LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = -1472095446265252929LL;
unsigned short var_4 = (unsigned short)2497;
unsigned int var_6 = 3792559370U;
signed char var_7 = (signed char)-121;
unsigned char var_9 = (unsigned char)255;
int var_10 = 1573239519;
unsigned long long int var_11 = 17315169354920589715ULL;
unsigned int var_12 = 1587807966U;
short var_13 = (short)-25003;
unsigned long long int var_14 = 3274884238411740042ULL;
unsigned char var_16 = (unsigned char)151;
unsigned short var_17 = (unsigned short)13602;
unsigned int var_18 = 1671729467U;
int zero = 0;
unsigned short var_20 = (unsigned short)60072;
_Bool var_21 = (_Bool)1;
long long int var_22 = 8902890473493146215LL;
short var_23 = (short)-9705;
unsigned int var_24 = 2896311068U;
unsigned short var_25 = (unsigned short)30351;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 2917224117U;
unsigned int var_28 = 1614516613U;
long long int arr_1 [18] ;
unsigned long long int arr_4 [18] ;
unsigned short arr_7 [18] [18] ;
long long int arr_8 [18] ;
unsigned int arr_9 [18] ;
unsigned short arr_10 [18] ;
long long int arr_15 [18] [18] [18] ;
unsigned int arr_16 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -8518255772606975324LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 15116230132560831152ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)48719;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = -6350615530732010270LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 548947445U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned short)38530;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -6736216731089740567LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 20170901U;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
