#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
int var_2 = -2091269907;
_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)57710;
unsigned char var_7 = (unsigned char)31;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)9990;
unsigned long long int var_10 = 4713096781134074070ULL;
signed char var_11 = (signed char)(-127 - 1);
unsigned int var_12 = 1374266181U;
int zero = 0;
signed char var_13 = (signed char)-78;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2661892209U;
unsigned long long int var_16 = 7018258537401464619ULL;
unsigned short var_17 = (unsigned short)25614;
long long int var_18 = 5757685983558297339LL;
long long int arr_0 [18] [18] ;
long long int arr_1 [18] [18] ;
unsigned char arr_2 [18] [18] ;
long long int arr_6 [15] [15] ;
unsigned short arr_7 [15] ;
unsigned char arr_3 [18] [18] ;
unsigned char arr_4 [18] ;
unsigned int arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -3090972604450419400LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -6799624691618304532LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -6916891057040715896LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned short)46152;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 3144747130U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
