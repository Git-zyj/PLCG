#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2409700178778612885LL;
unsigned char var_3 = (unsigned char)151;
unsigned int var_7 = 3325679043U;
unsigned short var_8 = (unsigned short)51602;
int var_11 = 208256228;
int zero = 0;
int var_12 = -2115059079;
long long int var_13 = 4252338156172856057LL;
short var_14 = (short)-8014;
unsigned int var_15 = 3856306345U;
unsigned long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned long long int arr_2 [19] [19] ;
int arr_6 [11] ;
signed char arr_7 [11] ;
signed char arr_3 [19] ;
short arr_4 [19] ;
unsigned int arr_5 [19] ;
unsigned char arr_8 [11] ;
unsigned char arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 6836406898698759752ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)7530;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 2771009746928641585ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 449236118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)14028;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 3195154035U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (unsigned char)111;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
