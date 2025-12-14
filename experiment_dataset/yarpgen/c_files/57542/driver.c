#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
long long int var_1 = -6625505168848058054LL;
unsigned int var_4 = 2654374658U;
unsigned int var_7 = 1074060027U;
short var_8 = (short)-24967;
short var_10 = (short)16885;
unsigned short var_11 = (unsigned short)30190;
unsigned long long int var_12 = 12301997695115535556ULL;
short var_13 = (short)-29581;
int zero = 0;
long long int var_17 = -5193996938905974972LL;
int var_18 = 467892465;
long long int var_19 = -7678359267776792392LL;
unsigned int var_20 = 778811404U;
unsigned int var_21 = 4257377055U;
long long int arr_1 [15] ;
signed char arr_2 [15] ;
int arr_5 [24] [24] ;
short arr_6 [24] [24] ;
signed char arr_7 [24] [24] ;
unsigned short arr_8 [24] ;
signed char arr_14 [20] ;
unsigned int arr_15 [20] [20] ;
unsigned long long int arr_3 [15] ;
unsigned int arr_4 [15] ;
long long int arr_9 [24] ;
unsigned short arr_10 [24] ;
unsigned short arr_13 [24] ;
unsigned short arr_16 [20] ;
long long int arr_17 [20] ;
unsigned int arr_20 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -2478255743578476574LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -537564363;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)18954;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)62821;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 785205674U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1173571627192776590ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2683334451U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 343846537063268345LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)47422;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned short)7139;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (unsigned short)39459;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = -5829281782578332407LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 1946252537U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
