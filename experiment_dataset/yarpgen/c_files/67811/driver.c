#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1370480579;
unsigned long long int var_2 = 1433146153009817956ULL;
unsigned int var_4 = 976658744U;
unsigned short var_5 = (unsigned short)24484;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)87;
unsigned char var_8 = (unsigned char)63;
short var_9 = (short)26601;
int zero = 0;
unsigned short var_10 = (unsigned short)41008;
unsigned short var_11 = (unsigned short)29232;
unsigned short var_12 = (unsigned short)15564;
long long int var_13 = -4770515502074879103LL;
unsigned int var_14 = 3954645630U;
signed char arr_4 [24] ;
unsigned long long int arr_13 [24] ;
unsigned char arr_14 [24] ;
unsigned short arr_15 [24] [24] [24] ;
unsigned short arr_28 [11] ;
unsigned short arr_29 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-58 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 13607769592034340647ULL : 11250246885245279634ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned char)236 : (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)32997 : (unsigned short)41390;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6505 : (unsigned short)58645;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14696 : (unsigned short)64898;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
