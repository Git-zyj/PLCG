#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
short var_2 = (short)2735;
unsigned short var_3 = (unsigned short)20129;
signed char var_4 = (signed char)-61;
long long int var_6 = -8315904566207561200LL;
unsigned short var_7 = (unsigned short)37534;
unsigned char var_8 = (unsigned char)245;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)25;
unsigned int var_12 = 2485904807U;
int zero = 0;
int var_13 = 1766028274;
unsigned long long int var_14 = 15848101429796712298ULL;
long long int var_15 = 2163390470479202798LL;
long long int var_16 = 7860213745688361656LL;
unsigned char var_17 = (unsigned char)78;
unsigned char arr_0 [15] ;
_Bool arr_1 [15] ;
short arr_2 [15] ;
short arr_3 [15] ;
unsigned short arr_4 [15] [15] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-8593;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-31631;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)51950;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4603412852068439022ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
