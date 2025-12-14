#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4114;
short var_2 = (short)13214;
unsigned long long int var_3 = 2201940461953821593ULL;
short var_6 = (short)-17515;
unsigned long long int var_8 = 2444420882644516234ULL;
short var_10 = (short)-22069;
unsigned long long int var_13 = 1808291282692129005ULL;
int zero = 0;
unsigned long long int var_15 = 4399840777392628613ULL;
signed char var_16 = (signed char)-83;
signed char var_17 = (signed char)59;
unsigned long long int var_18 = 3840047099218862286ULL;
unsigned long long int var_19 = 13971726748086340172ULL;
short var_20 = (short)18177;
short var_21 = (short)-1269;
signed char arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
short arr_2 [14] ;
short arr_3 [15] ;
unsigned long long int arr_4 [15] ;
unsigned long long int arr_5 [15] ;
signed char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 13602889288282786198ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)8775;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)16477;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 12203636021348645631ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 15997424129000595658ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-87;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
