#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3665329164U;
unsigned char var_4 = (unsigned char)229;
_Bool var_7 = (_Bool)0;
long long int var_8 = -7744669048851700075LL;
unsigned short var_13 = (unsigned short)4663;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13094724073898736379ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 2742101273693254803ULL;
unsigned short var_18 = (unsigned short)10779;
unsigned int var_19 = 1883165146U;
long long int var_20 = 2649383983643089432LL;
short var_21 = (short)-689;
int var_22 = 1868538507;
unsigned short var_23 = (unsigned short)50054;
unsigned long long int arr_1 [24] ;
unsigned char arr_4 [13] [13] ;
_Bool arr_9 [25] [25] ;
unsigned long long int arr_12 [25] [25] [25] ;
unsigned long long int arr_14 [25] ;
_Bool arr_2 [24] ;
unsigned long long int arr_16 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 5974243636048721378ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3703011126381757294ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 17224498427736159179ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 11359879325378625516ULL : 18243624152838918707ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
