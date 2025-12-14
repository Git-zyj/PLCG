#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28407;
unsigned short var_2 = (unsigned short)64565;
short var_3 = (short)10278;
signed char var_4 = (signed char)87;
short var_5 = (short)-17991;
unsigned int var_10 = 755124486U;
unsigned long long int var_12 = 16063403909489580197ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)14422;
long long int var_15 = 8786250843855944714LL;
short var_16 = (short)20086;
unsigned char var_17 = (unsigned char)19;
short var_18 = (short)30564;
int var_19 = 1071751523;
unsigned int var_20 = 2720388251U;
long long int arr_0 [19] ;
unsigned long long int arr_2 [19] ;
short arr_7 [10] [10] ;
long long int arr_4 [19] ;
unsigned short arr_5 [19] ;
int arr_11 [10] [10] [10] ;
unsigned short arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2959735818720659LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 10858977205305918769ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (short)16193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -7045453192508106912LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)42847;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 966112648;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)577;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
