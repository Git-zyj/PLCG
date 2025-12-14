#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5986524287008199502ULL;
short var_6 = (short)11583;
int var_9 = -2113081432;
unsigned short var_10 = (unsigned short)42662;
short var_17 = (short)-3805;
int zero = 0;
unsigned int var_20 = 3298452902U;
unsigned short var_21 = (unsigned short)15867;
short var_22 = (short)6525;
unsigned int var_23 = 3684050902U;
int var_24 = -1254629128;
int var_25 = -1677516182;
int var_26 = 1016165325;
unsigned int var_27 = 1337818061U;
unsigned int var_28 = 4239218557U;
signed char arr_0 [10] [10] ;
signed char arr_1 [10] [10] ;
int arr_2 [10] ;
_Bool arr_3 [20] ;
unsigned long long int arr_5 [20] ;
unsigned long long int arr_9 [15] [15] ;
unsigned int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 318806333;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 17635701018176381181ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = 8724682257870609031ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3361680659U : 1247794470U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
