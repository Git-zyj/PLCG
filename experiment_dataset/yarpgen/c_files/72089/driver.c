#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49082;
unsigned int var_1 = 935767524U;
unsigned int var_2 = 397042900U;
unsigned int var_3 = 3796028949U;
unsigned long long int var_5 = 7895600765947189689ULL;
signed char var_8 = (signed char)-75;
unsigned short var_10 = (unsigned short)22921;
int zero = 0;
int var_12 = 1478066638;
unsigned int var_13 = 2515384651U;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 13837798734660726273ULL;
int arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
short arr_2 [11] [11] ;
unsigned char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 879124615;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 1421863508U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-32153;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)66;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
