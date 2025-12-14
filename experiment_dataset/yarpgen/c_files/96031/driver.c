#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18404714027375691138ULL;
unsigned long long int var_1 = 2438917443335600443ULL;
unsigned short var_2 = (unsigned short)35491;
unsigned short var_3 = (unsigned short)43919;
unsigned int var_5 = 1984469472U;
unsigned char var_6 = (unsigned char)206;
unsigned long long int var_8 = 12336483601910237922ULL;
signed char var_9 = (signed char)-65;
long long int var_10 = 8279829493954608055LL;
unsigned long long int var_11 = 9425561972003159742ULL;
unsigned long long int var_12 = 16464249296431374425ULL;
unsigned char var_13 = (unsigned char)192;
long long int var_14 = 7526359869671022509LL;
unsigned int var_15 = 2341314770U;
unsigned char var_16 = (unsigned char)187;
int zero = 0;
unsigned short var_17 = (unsigned short)2732;
signed char var_18 = (signed char)28;
signed char var_19 = (signed char)-120;
signed char var_20 = (signed char)-22;
unsigned int var_21 = 3869079599U;
unsigned long long int var_22 = 266452486421310829ULL;
unsigned long long int var_23 = 13306774768193209358ULL;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] [15] ;
unsigned int arr_4 [15] ;
unsigned int arr_5 [15] ;
signed char arr_2 [15] ;
signed char arr_3 [15] ;
unsigned long long int arr_6 [15] ;
unsigned long long int arr_7 [15] ;
signed char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16026380845325463942ULL : 1123013441929593953ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 108817433U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 607112330U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)68;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 3455782917094008219ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 5687828265111069777ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (signed char)64;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
