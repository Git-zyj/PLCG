#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 560932569;
_Bool var_2 = (_Bool)0;
int var_3 = -1143296703;
short var_4 = (short)-29396;
short var_5 = (short)-1969;
unsigned int var_6 = 3876463069U;
int var_8 = 1733245425;
unsigned short var_9 = (unsigned short)48213;
int zero = 0;
unsigned int var_10 = 4023577860U;
short var_11 = (short)26267;
short var_12 = (short)-4498;
signed char var_13 = (signed char)-1;
int var_14 = 2052490052;
signed char var_15 = (signed char)86;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)5196;
short var_18 = (short)15837;
unsigned long long int var_19 = 17094625849789040333ULL;
long long int var_20 = 8380570005658216871LL;
unsigned long long int var_21 = 9327902967334403782ULL;
signed char var_22 = (signed char)52;
int arr_1 [17] [17] ;
unsigned char arr_3 [20] ;
_Bool arr_4 [20] ;
unsigned int arr_5 [20] [20] ;
unsigned int arr_6 [20] ;
_Bool arr_9 [20] [20] [20] ;
signed char arr_10 [20] ;
unsigned int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1990590810;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 13279996U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1051855021U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 800591447U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
