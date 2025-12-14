#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-122;
short var_3 = (short)-27988;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 3087210091U;
signed char var_11 = (signed char)57;
unsigned short var_12 = (unsigned short)2805;
unsigned char var_13 = (unsigned char)5;
unsigned long long int var_14 = 17723878479190801787ULL;
int zero = 0;
long long int var_15 = -1205475612003099377LL;
unsigned int var_16 = 2382292491U;
unsigned long long int var_17 = 5758620833562473207ULL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-25514;
unsigned int arr_0 [24] [24] ;
signed char arr_1 [24] [24] ;
unsigned char arr_13 [10] ;
unsigned char arr_14 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 999498443U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)28 : (signed char)4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)56;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
