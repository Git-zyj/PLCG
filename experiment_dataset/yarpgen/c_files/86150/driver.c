#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16876;
unsigned short var_4 = (unsigned short)65134;
short var_5 = (short)-16485;
long long int var_9 = 620568558654630358LL;
signed char var_12 = (signed char)10;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 376161504U;
long long int var_21 = -6859930727095310089LL;
unsigned char var_22 = (unsigned char)24;
int var_23 = 2073508161;
unsigned long long int var_24 = 4211085551851317060ULL;
unsigned long long int arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned char arr_4 [10] [10] [10] ;
unsigned short arr_5 [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3181585273366244957ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 14580144401604627509ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)24148;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)29560;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
