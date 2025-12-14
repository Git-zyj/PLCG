#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16333214789190720704ULL;
unsigned long long int var_2 = 11006231879999151735ULL;
signed char var_4 = (signed char)96;
int var_6 = 464890420;
unsigned short var_8 = (unsigned short)64067;
signed char var_10 = (signed char)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17754649636402851557ULL;
int zero = 0;
short var_16 = (short)-17986;
short var_17 = (short)-15590;
int var_18 = 596373300;
unsigned long long int var_19 = 10450890397259060055ULL;
long long int var_20 = 46407070896542083LL;
unsigned short var_21 = (unsigned short)44256;
long long int var_22 = -9049051885125181334LL;
unsigned long long int var_23 = 10180662025391350533ULL;
unsigned short var_24 = (unsigned short)38037;
signed char arr_0 [23] ;
_Bool arr_1 [23] [23] ;
int arr_6 [21] ;
unsigned short arr_7 [21] [21] [21] ;
unsigned long long int arr_11 [21] [21] [21] ;
unsigned int arr_13 [25] ;
unsigned char arr_14 [25] ;
_Bool arr_15 [25] ;
short arr_16 [25] ;
signed char arr_2 [23] [23] ;
int arr_12 [21] [21] ;
unsigned int arr_17 [25] ;
_Bool arr_18 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -796211461;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)27701 : (unsigned short)39162;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7815134607795705811ULL : 13967978296225934266ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 3675184051U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (short)-5082;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -1405079912 : -1056254396;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 2442052111U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
