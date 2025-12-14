#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)48;
unsigned char var_5 = (unsigned char)254;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-22039;
long long int var_12 = 7465250537526547250LL;
signed char var_13 = (signed char)91;
unsigned long long int var_14 = 3246513671725545794ULL;
unsigned int var_16 = 1305309487U;
int zero = 0;
unsigned char var_18 = (unsigned char)239;
short var_19 = (short)-6060;
unsigned int var_20 = 1627274161U;
signed char var_21 = (signed char)120;
unsigned char var_22 = (unsigned char)196;
unsigned short var_23 = (unsigned short)50276;
unsigned char var_24 = (unsigned char)78;
short var_25 = (short)-3096;
int var_26 = 1675611703;
_Bool arr_0 [15] ;
unsigned long long int arr_1 [15] ;
signed char arr_2 [15] ;
unsigned short arr_3 [15] [15] ;
signed char arr_4 [15] [15] [15] ;
signed char arr_5 [15] ;
_Bool arr_6 [15] ;
unsigned short arr_7 [15] ;
signed char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 16817815771794560826ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)28214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-46 : (signed char)59;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-69 : (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6654 : (unsigned short)7228;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)15 : (signed char)-15;
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
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
