#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18354359139720595581ULL;
_Bool var_5 = (_Bool)0;
int var_9 = 827736695;
unsigned int var_10 = 3263689173U;
unsigned int var_11 = 2805557094U;
int var_13 = 725863424;
int var_15 = 475009236;
int zero = 0;
unsigned long long int var_16 = 3952387915266041820ULL;
int var_17 = 463157995;
int var_18 = -1954622041;
unsigned int var_19 = 2974146884U;
unsigned long long int var_20 = 4088888364531856204ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16537553513923442715ULL;
unsigned long long int var_23 = 11946467141256866726ULL;
_Bool var_24 = (_Bool)1;
int var_25 = -1087140539;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 11545641404231754746ULL;
_Bool var_28 = (_Bool)0;
_Bool arr_1 [21] [21] ;
_Bool arr_8 [12] ;
int arr_9 [24] ;
int arr_12 [24] [24] [24] ;
int arr_14 [24] ;
short arr_16 [24] [24] [24] ;
short arr_17 [24] [24] [24] ;
int arr_18 [24] ;
int arr_22 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 6345687;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1211946083;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = -1239907449;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)-13358;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)1567;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 2075604005;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = -1959077490;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
