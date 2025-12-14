#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17987;
short var_2 = (short)-22612;
unsigned char var_3 = (unsigned char)233;
unsigned char var_4 = (unsigned char)133;
signed char var_5 = (signed char)-20;
unsigned long long int var_6 = 17547705995672274795ULL;
long long int var_7 = 7482134144935440842LL;
signed char var_8 = (signed char)-65;
unsigned char var_9 = (unsigned char)149;
unsigned char var_10 = (unsigned char)48;
unsigned short var_12 = (unsigned short)28954;
int zero = 0;
unsigned short var_13 = (unsigned short)299;
signed char var_14 = (signed char)-112;
unsigned char var_15 = (unsigned char)74;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)51926;
short var_18 = (short)-1081;
long long int var_19 = -3614363955555296661LL;
int arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
_Bool arr_2 [25] [25] ;
long long int arr_5 [22] ;
unsigned int arr_6 [22] ;
signed char arr_8 [21] [21] ;
_Bool arr_9 [21] ;
short arr_3 [25] ;
short arr_4 [25] ;
unsigned short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -568593387;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 4223279226U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -885688820171363924LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 4285780204U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-3904;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)2184;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)60486;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
