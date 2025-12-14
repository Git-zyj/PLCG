#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3631130464U;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 1807364761U;
unsigned char var_7 = (unsigned char)61;
unsigned char var_8 = (unsigned char)238;
unsigned int var_10 = 1479845176U;
int zero = 0;
unsigned char var_11 = (unsigned char)91;
short var_12 = (short)1914;
unsigned long long int var_13 = 2907778049854813012ULL;
signed char var_14 = (signed char)-4;
unsigned char var_15 = (unsigned char)162;
int var_16 = 582062826;
_Bool arr_0 [20] [20] ;
unsigned int arr_1 [20] [20] ;
int arr_2 [20] ;
unsigned char arr_3 [20] [20] ;
unsigned int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1618014661U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 962311183;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3479023857U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
