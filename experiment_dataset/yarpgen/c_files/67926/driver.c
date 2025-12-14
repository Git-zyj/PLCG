#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1184170706U;
unsigned char var_1 = (unsigned char)80;
unsigned short var_3 = (unsigned short)3819;
unsigned char var_4 = (unsigned char)228;
short var_5 = (short)12530;
unsigned long long int var_6 = 11089160906861418741ULL;
short var_7 = (short)28707;
unsigned long long int var_9 = 3376135805513016060ULL;
unsigned short var_11 = (unsigned short)10360;
unsigned char var_12 = (unsigned char)113;
unsigned long long int var_13 = 12367563433580452692ULL;
long long int var_14 = -4263189043233687234LL;
unsigned char var_15 = (unsigned char)112;
unsigned int var_16 = 1937403233U;
unsigned long long int var_18 = 14370042124662821065ULL;
short var_19 = (short)21875;
int zero = 0;
unsigned long long int var_20 = 9174538489029452975ULL;
signed char var_21 = (signed char)-113;
unsigned short var_22 = (unsigned short)18111;
unsigned short arr_3 [22] ;
unsigned short arr_4 [22] ;
unsigned short arr_5 [22] ;
unsigned char arr_11 [10] ;
unsigned long long int arr_12 [10] [10] ;
unsigned int arr_13 [10] [10] ;
unsigned char arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7484 : (unsigned short)6520;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47500 : (unsigned short)34659;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32239 : (unsigned short)40120;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 14764152524698987238ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 3028642634U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
