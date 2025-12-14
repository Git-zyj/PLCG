#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
int var_1 = -151599496;
long long int var_2 = 8853355186733059421LL;
signed char var_3 = (signed char)9;
short var_4 = (short)25387;
int var_5 = 1628996763;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 5938561857998049138LL;
signed char var_11 = (signed char)77;
short var_12 = (short)6926;
unsigned long long int var_13 = 1985829110956345802ULL;
short var_14 = (short)-18295;
_Bool var_15 = (_Bool)1;
int arr_0 [24] ;
unsigned int arr_1 [24] ;
unsigned long long int arr_5 [23] [23] ;
unsigned char arr_6 [23] [23] ;
_Bool arr_2 [24] ;
int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -862795895;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2406240106U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 5926919123678800796ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -1647832874;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
