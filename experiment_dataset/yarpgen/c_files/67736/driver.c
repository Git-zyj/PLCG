#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)64;
signed char var_7 = (signed char)-74;
unsigned long long int var_8 = 4153072022802022548ULL;
unsigned char var_10 = (unsigned char)154;
unsigned short var_11 = (unsigned short)35825;
int zero = 0;
int var_13 = -1426890438;
int var_14 = 492381910;
signed char var_15 = (signed char)-117;
unsigned int var_16 = 3452874096U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)56925;
signed char var_19 = (signed char)54;
signed char var_20 = (signed char)66;
long long int var_21 = 8402414095201459251LL;
int var_22 = -1960686456;
unsigned int var_23 = 3615526097U;
unsigned int var_24 = 1066093448U;
unsigned long long int var_25 = 10090522550906235106ULL;
signed char arr_0 [24] ;
short arr_1 [24] ;
unsigned long long int arr_2 [24] ;
_Bool arr_3 [24] ;
_Bool arr_6 [16] [16] ;
unsigned long long int arr_8 [16] ;
signed char arr_10 [16] ;
int arr_13 [16] ;
unsigned short arr_5 [24] ;
signed char arr_14 [16] ;
int arr_15 [16] [16] ;
unsigned short arr_19 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-11796;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 15948162214907417627ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 15801454228455371721ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 516192709;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)39065;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 106462107 : 1326815060;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)49984 : (unsigned short)60416;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
