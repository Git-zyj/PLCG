#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 274008870;
signed char var_5 = (signed char)104;
long long int var_7 = -912590061606341507LL;
short var_8 = (short)3854;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)91;
unsigned char var_13 = (unsigned char)247;
signed char var_15 = (signed char)-20;
unsigned long long int var_17 = 5025033781209607189ULL;
unsigned int var_18 = 1196339679U;
int zero = 0;
unsigned int var_19 = 2553203942U;
unsigned char var_20 = (unsigned char)97;
unsigned long long int var_21 = 3212082256025870474ULL;
long long int arr_0 [20] [20] ;
_Bool arr_1 [20] [20] ;
short arr_2 [20] [20] ;
long long int arr_3 [20] [20] ;
unsigned long long int arr_4 [20] ;
signed char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1468597357671987755LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-3352;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 3814667534276886038LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 2195526435618526969ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)-95;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
