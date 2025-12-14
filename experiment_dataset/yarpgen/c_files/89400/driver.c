#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)197;
signed char var_11 = (signed char)-94;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)62118;
short var_14 = (short)-18083;
int zero = 0;
int var_16 = -1526993817;
int var_17 = -748783915;
short var_18 = (short)-3708;
signed char var_19 = (signed char)92;
long long int var_20 = 8722339413324204017LL;
long long int var_21 = -5072403161006380296LL;
int var_22 = -1776207365;
unsigned short arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
_Bool arr_5 [17] ;
short arr_6 [17] ;
long long int arr_2 [17] ;
unsigned long long int arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56597 : (unsigned short)15660;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)183 : (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)23625;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1950370623042123388LL : 1465152303344744313LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5711801084793205315ULL : 16676206357100274606ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
