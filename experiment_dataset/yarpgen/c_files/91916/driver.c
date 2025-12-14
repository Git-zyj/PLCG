#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30577;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)39637;
signed char var_4 = (signed char)107;
unsigned long long int var_5 = 17767612982950356369ULL;
unsigned long long int var_6 = 6749269557389304723ULL;
unsigned int var_9 = 4168011129U;
short var_13 = (short)-2784;
signed char var_14 = (signed char)-90;
unsigned long long int var_15 = 16129624280644956783ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)13145;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-5648;
int var_23 = -325154673;
unsigned long long int var_24 = 13733921548622073261ULL;
short var_25 = (short)16834;
unsigned int arr_0 [15] ;
short arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1749756360U : 2766395484U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-27931;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3587565774U : 1429080462U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
