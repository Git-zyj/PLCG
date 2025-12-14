#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7876478010238472778ULL;
unsigned long long int var_1 = 16085101566214513480ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)42;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)42935;
unsigned long long int var_10 = 6752600358964395940ULL;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
long long int var_12 = -114981270318019181LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3254840342U;
int var_15 = -2091430520;
int var_16 = 1422705899;
unsigned char arr_0 [15] [15] ;
long long int arr_1 [15] ;
unsigned long long int arr_2 [15] [15] [15] ;
long long int arr_4 [15] ;
signed char arr_6 [15] [15] ;
unsigned char arr_8 [15] [15] ;
unsigned long long int arr_10 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)101 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 8799427339237064184LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 13427590425483675209ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -322405410828312403LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-106 : (signed char)-26;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 9061008408405509110ULL : 6990570255922022091ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
