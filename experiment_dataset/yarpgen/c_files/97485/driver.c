#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3441521903U;
unsigned int var_9 = 421649847U;
unsigned int var_11 = 1115001760U;
unsigned int var_12 = 24383036U;
unsigned int var_13 = 4191224592U;
unsigned char var_14 = (unsigned char)29;
unsigned char var_16 = (unsigned char)187;
unsigned short var_19 = (unsigned short)25932;
int zero = 0;
unsigned char var_20 = (unsigned char)5;
short var_21 = (short)24449;
unsigned long long int var_22 = 18051460056824295303ULL;
unsigned long long int var_23 = 4481301765641214543ULL;
unsigned int var_24 = 1966975608U;
unsigned int arr_1 [20] [20] ;
unsigned int arr_4 [20] ;
unsigned int arr_5 [20] [20] ;
unsigned short arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 3059704187U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1410111494U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 856497633U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47563 : (unsigned short)27999;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
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
