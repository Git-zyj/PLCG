#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14403723721537456526ULL;
unsigned short var_1 = (unsigned short)24131;
unsigned long long int var_2 = 17324328332489816929ULL;
unsigned short var_3 = (unsigned short)43992;
long long int var_4 = 7678304933756122768LL;
unsigned int var_5 = 2198650568U;
long long int var_6 = 8555840112280730418LL;
signed char var_7 = (signed char)-101;
unsigned short var_8 = (unsigned short)3612;
unsigned short var_9 = (unsigned short)64735;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1696711657U;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 12575585675898539388ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)52;
unsigned int var_21 = 39424845U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2482873464U;
signed char var_24 = (signed char)38;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 3692871083U;
short arr_2 [15] [15] ;
unsigned short arr_10 [11] ;
signed char arr_13 [18] [18] ;
unsigned short arr_14 [18] ;
unsigned short arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)12076;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned short)12456;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)43 : (signed char)-12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)19528 : (unsigned short)52694;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned short)60914;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
