#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6545357603732516007ULL;
unsigned char var_8 = (unsigned char)63;
unsigned int var_9 = 4251754877U;
short var_12 = (short)-11695;
unsigned short var_15 = (unsigned short)14639;
_Bool var_16 = (_Bool)1;
unsigned long long int var_19 = 11676278107806929330ULL;
int zero = 0;
signed char var_20 = (signed char)-54;
unsigned char var_21 = (unsigned char)202;
unsigned char var_22 = (unsigned char)203;
unsigned long long int var_23 = 8094990557041283065ULL;
signed char var_24 = (signed char)20;
signed char arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
short arr_2 [23] ;
unsigned char arr_4 [23] [23] [23] ;
int arr_5 [23] ;
unsigned long long int arr_7 [23] [23] ;
unsigned long long int arr_8 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1952340761818906616ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-10602;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -2113761819;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 3609936017025486912ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 4423626806072783694ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
