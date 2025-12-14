#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 325298285715712784LL;
long long int var_3 = 6409040855448305230LL;
unsigned long long int var_4 = 2945860875644727185ULL;
unsigned long long int var_5 = 17602189292780439559ULL;
unsigned long long int var_9 = 2960825327166084226ULL;
unsigned char var_11 = (unsigned char)242;
_Bool var_12 = (_Bool)1;
short var_15 = (short)-14316;
int zero = 0;
unsigned int var_19 = 3782969559U;
signed char var_20 = (signed char)75;
unsigned long long int var_21 = 2395554066433095409ULL;
short var_22 = (short)11364;
long long int arr_2 [25] ;
unsigned int arr_3 [25] ;
unsigned int arr_5 [25] ;
_Bool arr_8 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 7333144050302880631LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2250606357U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3707110192U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
