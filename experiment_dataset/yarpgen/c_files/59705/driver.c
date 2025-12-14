#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-31556;
unsigned long long int var_4 = 3810322846212264395ULL;
unsigned char var_5 = (unsigned char)112;
signed char var_8 = (signed char)-81;
unsigned short var_9 = (unsigned short)2390;
int var_10 = 758311176;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -610047554;
unsigned int var_13 = 715673909U;
short var_14 = (short)23468;
int var_15 = 1054050076;
short var_16 = (short)3895;
long long int var_17 = -955806387796788637LL;
short var_18 = (short)1152;
signed char var_19 = (signed char)-58;
signed char var_20 = (signed char)2;
signed char var_21 = (signed char)85;
unsigned char var_22 = (unsigned char)192;
unsigned short arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
signed char arr_3 [23] [23] ;
unsigned int arr_5 [18] ;
unsigned char arr_7 [18] ;
unsigned long long int arr_11 [18] ;
long long int arr_14 [18] [18] [18] ;
unsigned char arr_16 [18] [18] ;
short arr_6 [18] ;
unsigned char arr_9 [18] ;
signed char arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)40899;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)358;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 3144919067U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 3965468356552061836ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -3782865904044186356LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)8192;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (signed char)68;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
