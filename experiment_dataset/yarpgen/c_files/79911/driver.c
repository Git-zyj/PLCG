#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)2432;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-19721;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)8453;
short var_17 = (short)5410;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8045958455153724624ULL;
unsigned long long int var_20 = 3792029107765203042ULL;
short var_21 = (short)-28677;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 1359077397004053574ULL;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
short arr_4 [21] [21] [21] ;
short arr_9 [21] [21] [21] ;
unsigned long long int arr_10 [21] [21] ;
short arr_11 [21] ;
unsigned long long int arr_16 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 18077499043845415398ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 10524596410751656021ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-28859;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)9357;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 703093672692444013ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (short)17275;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 12038440782573763581ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
