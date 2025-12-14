#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10076785847768096242ULL;
int var_3 = -264007059;
unsigned long long int var_4 = 4460481680175329574ULL;
unsigned int var_5 = 2121012254U;
unsigned int var_6 = 3785839441U;
long long int var_7 = -897216917521614139LL;
unsigned int var_9 = 2405770679U;
int zero = 0;
unsigned int var_10 = 98577198U;
unsigned long long int var_11 = 17244996373725801061ULL;
unsigned long long int var_12 = 13680277083246167573ULL;
unsigned int var_13 = 1977033394U;
unsigned long long int var_14 = 10793522302937717143ULL;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] ;
short arr_2 [21] ;
unsigned char arr_5 [21] [21] ;
unsigned long long int arr_3 [21] ;
short arr_6 [21] ;
unsigned long long int arr_7 [21] ;
unsigned int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 14098964991755392050ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 9190545866155903172LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-13068;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 10799849884630982193ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)2209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 7980557322995940042ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 252896235U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
