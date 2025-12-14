#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8120909066267529655ULL;
signed char var_1 = (signed char)93;
unsigned short var_4 = (unsigned short)38698;
unsigned char var_5 = (unsigned char)241;
unsigned char var_6 = (unsigned char)93;
long long int var_7 = 4048340923626862919LL;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_13 = 7948130488673976352LL;
unsigned char var_14 = (unsigned char)242;
int zero = 0;
int var_15 = 1977650364;
_Bool var_16 = (_Bool)1;
long long int var_17 = 761238298076898428LL;
unsigned int var_18 = 2238367120U;
long long int var_19 = -2796969956018313853LL;
unsigned int var_20 = 3537529165U;
long long int arr_0 [16] ;
short arr_1 [16] ;
short arr_2 [16] ;
unsigned char arr_4 [16] ;
unsigned char arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -2428524018039301217LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-32226;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)3716;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
