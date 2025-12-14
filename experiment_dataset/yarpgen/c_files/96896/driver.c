#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32299;
int var_2 = 1058584772;
unsigned int var_3 = 1081374583U;
unsigned int var_4 = 1891082417U;
int var_5 = 1537452187;
unsigned long long int var_6 = 11227050778047064911ULL;
unsigned long long int var_7 = 9109322237851130945ULL;
unsigned short var_8 = (unsigned short)48955;
unsigned long long int var_9 = 8827216490004795657ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)50238;
signed char var_11 = (signed char)(-127 - 1);
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)127;
unsigned long long int var_14 = 4550528981692869493ULL;
signed char arr_1 [12] [12] ;
unsigned short arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned long long int arr_5 [12] ;
unsigned char arr_6 [12] ;
signed char arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)55867;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 3403494462U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 13697077432740501363ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
