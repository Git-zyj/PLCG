#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 305368359319641864ULL;
unsigned short var_2 = (unsigned short)36288;
unsigned long long int var_3 = 4483604800450326161ULL;
unsigned int var_6 = 1631782822U;
long long int var_10 = -5731844597666010843LL;
signed char var_11 = (signed char)-12;
signed char var_14 = (signed char)5;
int var_15 = -1137011988;
int zero = 0;
unsigned int var_18 = 749178622U;
signed char var_19 = (signed char)-66;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2585595668U;
unsigned int var_22 = 8349026U;
unsigned long long int var_23 = 16940373107376156115ULL;
int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
int arr_2 [16] ;
signed char arr_4 [15] [15] ;
unsigned short arr_5 [15] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1325261705;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 15167338180442243195ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 632921223;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)22090;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 10263399658093798247ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 14844570999068014211ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
