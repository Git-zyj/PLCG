#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -272865851807107290LL;
signed char var_3 = (signed char)3;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-123;
unsigned char var_8 = (unsigned char)200;
signed char var_10 = (signed char)-65;
int var_11 = -1350043853;
signed char var_12 = (signed char)-31;
int zero = 0;
signed char var_15 = (signed char)68;
unsigned int var_16 = 1329886356U;
unsigned char var_17 = (unsigned char)123;
unsigned int var_18 = 3710001416U;
unsigned short var_19 = (unsigned short)57209;
signed char var_20 = (signed char)77;
int var_21 = -621069438;
int var_22 = 87289001;
short var_23 = (short)-30857;
short arr_0 [15] [15] ;
int arr_1 [15] [15] ;
int arr_2 [15] ;
unsigned long long int arr_5 [15] ;
signed char arr_6 [15] ;
unsigned int arr_7 [15] ;
signed char arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)11309;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = -668523027;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1032645136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4083247900209424851ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 774427922U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)71;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
