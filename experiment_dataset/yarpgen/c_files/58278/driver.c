#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)241;
unsigned short var_2 = (unsigned short)62744;
long long int var_3 = -8941139492332774002LL;
unsigned short var_4 = (unsigned short)49928;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1004138118843040560LL;
unsigned int var_7 = 891615521U;
signed char var_8 = (signed char)32;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 5920815812395934413ULL;
unsigned int var_11 = 3538261168U;
int var_12 = -934399610;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8823324536700411172LL;
unsigned long long int var_15 = 5670932847947128070ULL;
unsigned long long int var_16 = 7788641682555762191ULL;
unsigned char var_17 = (unsigned char)144;
long long int var_19 = 2534368326670093282LL;
int zero = 0;
unsigned short var_20 = (unsigned short)20140;
long long int var_21 = 6408235228036960693LL;
_Bool var_22 = (_Bool)1;
long long int arr_0 [10] [10] ;
unsigned long long int arr_1 [10] [10] ;
signed char arr_2 [10] ;
long long int arr_7 [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
unsigned long long int arr_3 [10] ;
_Bool arr_4 [10] ;
signed char arr_5 [10] ;
short arr_6 [10] ;
unsigned char arr_9 [20] ;
unsigned short arr_10 [20] ;
long long int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3226529159156616650LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 17955401810404889835ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -909273490759126580LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 17526662323366922435ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 6470154298836435684ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)14571;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned short)48598;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 8999495206277208986LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
