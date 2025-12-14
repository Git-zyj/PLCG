#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -266633027987984435LL;
unsigned short var_4 = (unsigned short)55167;
long long int var_5 = 8762334072507350969LL;
unsigned long long int var_6 = 12996638500665896965ULL;
unsigned int var_7 = 636974668U;
int var_8 = -701587751;
unsigned char var_9 = (unsigned char)187;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -687829879;
long long int var_12 = 2618971386846259631LL;
short var_13 = (short)-16448;
_Bool arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
long long int arr_2 [15] ;
_Bool arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 199574235U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -8227161827095063378LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
