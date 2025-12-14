#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1015656658;
unsigned short var_3 = (unsigned short)64655;
unsigned long long int var_4 = 12319739651726169995ULL;
unsigned char var_5 = (unsigned char)203;
signed char var_6 = (signed char)120;
int var_11 = 1940962500;
int zero = 0;
unsigned short var_16 = (unsigned short)57413;
int var_17 = 255715725;
int var_18 = -182107656;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
short var_21 = (short)18059;
unsigned int arr_1 [11] ;
signed char arr_3 [11] ;
unsigned int arr_6 [11] ;
unsigned short arr_12 [11] ;
unsigned long long int arr_14 [11] [11] ;
unsigned int arr_7 [11] [11] [11] ;
signed char arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3141644890U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2813919339U : 1007557806U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (unsigned short)43699;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 8796916495130440758ULL : 7843885418340087413ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3077712674U : 1203204047U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)79 : (signed char)99;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
