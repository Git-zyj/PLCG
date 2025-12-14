#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5492474726234314557LL;
short var_8 = (short)22266;
int var_10 = 1124195771;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)14100;
signed char var_15 = (signed char)44;
int zero = 0;
unsigned int var_16 = 2189190419U;
unsigned long long int var_17 = 13997941377157941275ULL;
unsigned char var_18 = (unsigned char)247;
unsigned int var_19 = 3660015155U;
unsigned long long int arr_0 [24] [24] ;
long long int arr_1 [24] ;
signed char arr_2 [24] [24] ;
short arr_3 [24] ;
unsigned short arr_4 [24] ;
unsigned int arr_5 [24] ;
signed char arr_6 [24] [24] ;
signed char arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 9868261586432535397ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 6877261540707761881LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)19269;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)51717;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 3309633698U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)83;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
