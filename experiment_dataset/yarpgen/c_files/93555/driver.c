#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8603;
int var_2 = -61762058;
unsigned int var_3 = 211526536U;
int var_4 = -86040140;
signed char var_5 = (signed char)92;
short var_7 = (short)13203;
unsigned long long int var_9 = 7607288106258331130ULL;
short var_10 = (short)-27872;
int zero = 0;
unsigned short var_11 = (unsigned short)45663;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)38092;
long long int var_14 = -8922538096116754766LL;
short var_15 = (short)8819;
int var_16 = -1959557230;
int var_17 = -1444571592;
unsigned short var_18 = (unsigned short)12127;
signed char var_19 = (signed char)-23;
short var_20 = (short)-5956;
unsigned int arr_0 [16] [16] ;
unsigned short arr_1 [16] [16] ;
signed char arr_3 [16] [16] ;
_Bool arr_4 [16] ;
int arr_5 [16] ;
int arr_7 [12] ;
unsigned int arr_8 [12] [12] ;
unsigned int arr_2 [16] ;
signed char arr_6 [16] ;
unsigned int arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3272988317U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)38893;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1489904664;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 1801125634;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = 2442403943U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3647625672U : 1694084892U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1045749960U : 2280335128U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
