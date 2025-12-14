#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11243085406633049720ULL;
short var_1 = (short)12328;
unsigned short var_4 = (unsigned short)42876;
unsigned char var_5 = (unsigned char)148;
int var_6 = -351135249;
unsigned char var_8 = (unsigned char)193;
unsigned char var_9 = (unsigned char)71;
int var_10 = 654338658;
unsigned short var_11 = (unsigned short)47975;
int zero = 0;
unsigned int var_13 = 1660937216U;
signed char var_14 = (signed char)5;
unsigned short var_15 = (unsigned short)43801;
signed char var_16 = (signed char)-58;
unsigned int var_17 = 2582584463U;
unsigned int arr_0 [12] [12] ;
int arr_3 [18] ;
signed char arr_8 [15] ;
unsigned int arr_2 [12] [12] ;
unsigned long long int arr_6 [18] ;
unsigned int arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 1238878313U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1076683824;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1193019787U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 3157541316030058258ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 83324990U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
