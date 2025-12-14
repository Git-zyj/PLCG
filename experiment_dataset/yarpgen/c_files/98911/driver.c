#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14191;
unsigned long long int var_3 = 12613323714137335882ULL;
unsigned long long int var_6 = 4692849499608348509ULL;
short var_7 = (short)-13325;
unsigned long long int var_10 = 10584457388898706952ULL;
int zero = 0;
short var_11 = (short)1991;
unsigned long long int var_12 = 5915003565204393729ULL;
short var_13 = (short)23042;
unsigned long long int var_14 = 94237814469859144ULL;
unsigned long long int var_15 = 6027102968114713614ULL;
unsigned long long int arr_8 [18] [18] ;
unsigned long long int arr_7 [11] ;
unsigned long long int arr_11 [18] ;
short arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 14275603482338407999ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2674465699632396394ULL : 7735546025929628019ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 396444316704947040ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (short)-3476;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
