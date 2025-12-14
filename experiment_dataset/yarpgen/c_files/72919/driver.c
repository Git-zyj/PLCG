#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
unsigned int var_1 = 2817889520U;
long long int var_3 = -4011832257862322078LL;
signed char var_5 = (signed char)75;
unsigned long long int var_9 = 6295337661254912735ULL;
long long int var_10 = 5787442412876048710LL;
int var_11 = -1067972485;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int var_14 = 883498814;
_Bool arr_0 [14] ;
unsigned int arr_1 [14] ;
_Bool arr_6 [24] ;
int arr_7 [24] ;
unsigned int arr_8 [24] [24] ;
_Bool arr_2 [14] ;
short arr_3 [14] ;
unsigned char arr_4 [14] ;
short arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 4087237898U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -74718308;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 119333207U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)-15995;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)-15312;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
