#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13948;
_Bool var_2 = (_Bool)1;
int var_5 = 1320000267;
long long int var_6 = -7678894331850246201LL;
long long int var_7 = 8471159856880104656LL;
unsigned char var_11 = (unsigned char)189;
int var_12 = -1296358704;
int var_15 = -1585212204;
int zero = 0;
unsigned long long int var_16 = 265654662951348387ULL;
unsigned short var_17 = (unsigned short)922;
short var_18 = (short)29349;
short var_19 = (short)-11652;
unsigned char var_20 = (unsigned char)126;
long long int arr_0 [13] [13] ;
long long int arr_1 [13] ;
_Bool arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3842247463328601062LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -2990519252960894538LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
