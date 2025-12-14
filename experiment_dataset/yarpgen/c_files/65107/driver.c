#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)11681;
unsigned short var_2 = (unsigned short)18647;
int var_3 = 1283969840;
_Bool var_4 = (_Bool)1;
long long int var_5 = -3572335321420000801LL;
unsigned long long int var_6 = 16894597645661076105ULL;
unsigned long long int var_7 = 17558026498336181028ULL;
long long int var_8 = 5051795826692806083LL;
long long int var_9 = -5681241246682355220LL;
signed char var_10 = (signed char)-61;
int zero = 0;
signed char var_13 = (signed char)53;
signed char var_14 = (signed char)61;
unsigned long long int var_15 = 6702470597346042038ULL;
unsigned int var_16 = 791631131U;
short var_17 = (short)-28464;
signed char var_18 = (signed char)85;
unsigned int var_19 = 104047261U;
unsigned int var_20 = 2176953814U;
unsigned short var_21 = (unsigned short)60415;
short var_22 = (short)-27723;
signed char var_23 = (signed char)71;
signed char var_24 = (signed char)-71;
unsigned int arr_0 [16] [16] ;
short arr_1 [16] [16] ;
signed char arr_2 [16] ;
unsigned long long int arr_4 [16] ;
unsigned short arr_7 [16] [16] [16] ;
unsigned short arr_16 [16] [16] [16] [16] [16] ;
signed char arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 617815892U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28934;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 10564453656178168359ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)13149 : (unsigned short)18160;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)30523;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)29 : (signed char)72;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
