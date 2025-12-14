#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3340302088273643672ULL;
long long int var_6 = -5304697305114345779LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 7605133180068304710ULL;
unsigned int var_10 = 2527344378U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 683182724U;
unsigned int var_15 = 3655182657U;
unsigned long long int var_17 = 12893255310157108196ULL;
int zero = 0;
unsigned long long int var_20 = 1385478715629643798ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 142774720U;
_Bool var_23 = (_Bool)0;
long long int arr_0 [10] [10] ;
_Bool arr_1 [10] ;
unsigned int arr_2 [10] ;
long long int arr_3 [10] ;
short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 4637228381498770391LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 79010443U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3927587145626983903LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)20009;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
