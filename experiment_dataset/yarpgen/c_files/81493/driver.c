#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1019541309;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-24690;
short var_4 = (short)-14189;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 3635333365U;
int zero = 0;
int var_13 = 644357371;
short var_14 = (short)10901;
signed char var_15 = (signed char)3;
unsigned long long int var_16 = 15649457395608542235ULL;
unsigned long long int var_17 = 14468599794502973925ULL;
int var_18 = -1058501728;
unsigned int var_19 = 2647236864U;
int var_20 = 121024040;
unsigned long long int arr_1 [15] [15] ;
unsigned int arr_2 [15] ;
unsigned int arr_5 [24] ;
short arr_6 [24] ;
unsigned long long int arr_7 [24] [24] ;
short arr_4 [15] ;
unsigned long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 3404558146784992591ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1863532840U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2190270715U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-3173;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 14062226283763798019ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-3029 : (short)-26253;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 5230669404203182917ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
