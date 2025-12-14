#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 2040465664856472293LL;
unsigned long long int var_6 = 1637205789024210337ULL;
signed char var_7 = (signed char)-38;
unsigned long long int var_9 = 10243949917697402943ULL;
unsigned char var_11 = (unsigned char)89;
long long int var_13 = 6395264571536307956LL;
int zero = 0;
unsigned long long int var_15 = 9573616695896054723ULL;
int var_16 = -1352919802;
long long int var_17 = 6619023883402743040LL;
unsigned short var_18 = (unsigned short)46862;
unsigned short var_19 = (unsigned short)47687;
unsigned long long int var_20 = 14410359756913983079ULL;
long long int var_21 = -8030850520082817617LL;
unsigned int arr_0 [15] ;
unsigned short arr_1 [15] ;
short arr_4 [15] [15] ;
unsigned char arr_5 [15] [15] [15] [15] ;
signed char arr_6 [15] [15] ;
long long int arr_9 [10] ;
short arr_7 [15] ;
unsigned short arr_10 [10] ;
short arr_11 [10] ;
unsigned short arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2739859556U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)52612;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)29249 : (short)8575;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-85 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 7588104102339728603LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)30620 : (short)-13898;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)5350;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)-7055;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)22572;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
