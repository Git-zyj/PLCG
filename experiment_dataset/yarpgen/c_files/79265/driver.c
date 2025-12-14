#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3455230190U;
short var_1 = (short)-11344;
unsigned short var_2 = (unsigned short)38069;
unsigned int var_4 = 2281930346U;
unsigned short var_5 = (unsigned short)62642;
unsigned int var_8 = 2104284744U;
unsigned int var_9 = 1316836123U;
int var_10 = 61525392;
int zero = 0;
unsigned long long int var_11 = 17424527401216839800ULL;
signed char var_12 = (signed char)-84;
unsigned int var_13 = 3170569059U;
unsigned char var_14 = (unsigned char)96;
unsigned char var_15 = (unsigned char)117;
unsigned long long int var_16 = 17150741600735460716ULL;
short arr_0 [20] ;
int arr_1 [20] ;
signed char arr_3 [13] ;
unsigned char arr_4 [13] ;
unsigned char arr_2 [20] ;
unsigned int arr_9 [12] ;
int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-25115;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1588817525;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)10 : (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 2521756578U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 2431097;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
