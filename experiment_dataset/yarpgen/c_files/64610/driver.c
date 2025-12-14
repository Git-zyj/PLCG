#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)33229;
long long int var_7 = -6390871032957363927LL;
short var_8 = (short)-30467;
long long int var_9 = -2929544306196108447LL;
long long int var_10 = -4189387681793684812LL;
unsigned long long int var_11 = 7627660002249133521ULL;
short var_12 = (short)11013;
signed char var_13 = (signed char)23;
int zero = 0;
signed char var_15 = (signed char)78;
unsigned long long int var_16 = 8363247143083483835ULL;
signed char var_17 = (signed char)39;
int var_18 = -216536980;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)10820;
short var_21 = (short)26603;
signed char arr_0 [20] ;
int arr_1 [20] ;
int arr_5 [18] [18] ;
unsigned short arr_7 [18] ;
_Bool arr_11 [15] [15] ;
unsigned short arr_2 [20] ;
unsigned long long int arr_3 [20] ;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1983393941;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 1959949660;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)44219;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)9725;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4607853360906477459ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 2522594413197500673LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
