#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6262614460548258580ULL;
unsigned short var_4 = (unsigned short)63996;
unsigned int var_8 = 1454908958U;
short var_10 = (short)19653;
int zero = 0;
unsigned short var_14 = (unsigned short)50127;
unsigned char var_15 = (unsigned char)88;
unsigned short var_16 = (unsigned short)32913;
unsigned char arr_0 [13] ;
short arr_1 [13] ;
short arr_2 [13] ;
short arr_3 [13] [13] ;
unsigned int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-10977;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)28643;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-6287;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 767576069U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
