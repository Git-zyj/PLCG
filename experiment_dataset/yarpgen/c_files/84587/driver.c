#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2658919486116451712LL;
unsigned int var_1 = 835526911U;
unsigned int var_2 = 3038260654U;
int var_3 = -271983480;
unsigned int var_4 = 238230956U;
unsigned long long int var_9 = 14940317918421747612ULL;
short var_11 = (short)14514;
unsigned int var_14 = 1179618409U;
unsigned int var_15 = 995168704U;
int zero = 0;
unsigned long long int var_17 = 851790123777527019ULL;
unsigned int var_18 = 1120180018U;
signed char var_19 = (signed char)-2;
unsigned char var_20 = (unsigned char)123;
short var_21 = (short)3847;
unsigned short arr_0 [14] [14] ;
signed char arr_1 [14] ;
signed char arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)16454;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)42201;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
