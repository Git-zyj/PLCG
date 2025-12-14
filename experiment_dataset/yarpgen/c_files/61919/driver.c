#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1289198142;
unsigned long long int var_17 = 8667423832610761587ULL;
int zero = 0;
unsigned long long int var_18 = 14754014926476868113ULL;
signed char var_19 = (signed char)-57;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11600113071391646202ULL;
unsigned long long int var_22 = 14813841280169146988ULL;
unsigned int arr_1 [18] ;
signed char arr_2 [18] [18] [18] ;
unsigned int arr_3 [18] [18] ;
unsigned int arr_4 [18] [18] ;
short arr_6 [24] ;
signed char arr_7 [24] ;
short arr_8 [24] ;
unsigned long long int arr_11 [13] ;
unsigned short arr_10 [24] ;
unsigned int arr_15 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 84456302U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 727787541U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1597634823U : 3179619267U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)-27128;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)-10643;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 13086350411950026603ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)21829;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 4030484403U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
