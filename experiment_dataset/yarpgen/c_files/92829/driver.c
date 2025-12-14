#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)228;
_Bool var_6 = (_Bool)0;
int var_10 = 1949234676;
short var_12 = (short)7750;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)4;
unsigned short var_15 = (unsigned short)21440;
unsigned long long int var_16 = 13847337875361921796ULL;
signed char var_17 = (signed char)-123;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3805702983U;
unsigned short var_20 = (unsigned short)41733;
long long int arr_0 [11] ;
long long int arr_1 [11] ;
int arr_2 [11] [11] ;
long long int arr_4 [11] ;
short arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -3494235356261368147LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 8134014582601369077LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 177661425;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -788995258928927966LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-9229;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
