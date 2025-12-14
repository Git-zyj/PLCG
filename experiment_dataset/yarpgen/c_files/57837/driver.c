#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 9164987443100868050ULL;
long long int var_5 = -4856844789017666665LL;
unsigned long long int var_9 = 8913045577718436187ULL;
unsigned int var_10 = 2031905525U;
signed char var_12 = (signed char)-59;
signed char var_14 = (signed char)-99;
int zero = 0;
unsigned char var_15 = (unsigned char)131;
short var_16 = (short)6210;
signed char var_17 = (signed char)27;
short var_18 = (short)6939;
signed char var_19 = (signed char)-102;
short var_20 = (short)-27128;
unsigned char var_21 = (unsigned char)87;
long long int var_22 = 4101070172124780732LL;
short arr_0 [13] ;
unsigned char arr_1 [13] ;
short arr_2 [13] [13] ;
int arr_3 [13] ;
unsigned long long int arr_4 [16] ;
int arr_5 [16] ;
_Bool arr_7 [16] ;
_Bool arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-30328;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-14551;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1364768487;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9193364829134129572ULL : 1562927025380927375ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1856207719;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
