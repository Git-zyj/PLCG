#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)48;
short var_4 = (short)-11488;
unsigned short var_5 = (unsigned short)31715;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)60758;
unsigned long long int var_8 = 2465716000781908133ULL;
unsigned int var_9 = 1577860785U;
unsigned short var_10 = (unsigned short)31083;
int zero = 0;
unsigned char var_11 = (unsigned char)79;
unsigned short var_12 = (unsigned short)64617;
int var_13 = 156350800;
signed char var_14 = (signed char)-71;
signed char var_15 = (signed char)-83;
unsigned int var_16 = 361059865U;
signed char var_17 = (signed char)-59;
unsigned short var_18 = (unsigned short)34783;
signed char var_19 = (signed char)-35;
signed char arr_0 [24] ;
signed char arr_1 [24] ;
long long int arr_2 [24] ;
int arr_6 [24] [24] [24] ;
unsigned int arr_7 [24] [24] ;
short arr_9 [24] ;
int arr_11 [24] ;
unsigned char arr_12 [24] [24] [24] [24] [24] ;
_Bool arr_20 [24] [24] [24] [24] [24] ;
unsigned int arr_21 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -5004877389007693767LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 703762456;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 4192532769U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)-3741;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 1897790742;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 3458798163U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
