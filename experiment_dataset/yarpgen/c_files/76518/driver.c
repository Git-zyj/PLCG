#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1958834592;
signed char var_2 = (signed char)-68;
signed char var_4 = (signed char)-46;
unsigned short var_5 = (unsigned short)47931;
int var_6 = 1629742873;
int var_7 = -477929662;
unsigned short var_8 = (unsigned short)42523;
int var_10 = -1697115377;
_Bool var_12 = (_Bool)1;
int var_13 = -1622474403;
int zero = 0;
int var_15 = -1644886477;
signed char var_16 = (signed char)-121;
signed char var_17 = (signed char)58;
int var_18 = 1220432029;
int var_19 = -403272732;
int var_20 = 1076034542;
short var_21 = (short)-18468;
unsigned short var_22 = (unsigned short)2814;
int arr_0 [14] ;
_Bool arr_1 [14] ;
int arr_2 [14] ;
int arr_5 [21] ;
signed char arr_6 [21] ;
int arr_3 [14] ;
signed char arr_4 [14] ;
int arr_7 [21] ;
short arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 923775409;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 149545322;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -55196235;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-18 : (signed char)-61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -72237504;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -777476465 : 2101216124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)3041 : (short)7466;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
