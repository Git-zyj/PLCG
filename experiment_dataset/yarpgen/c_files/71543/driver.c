#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14163;
short var_2 = (short)28638;
unsigned char var_3 = (unsigned char)114;
unsigned long long int var_4 = 4239371978993588828ULL;
unsigned int var_5 = 3746570418U;
signed char var_6 = (signed char)64;
int var_7 = 1003820604;
unsigned int var_8 = 2615160559U;
unsigned char var_12 = (unsigned char)248;
unsigned short var_13 = (unsigned short)44497;
unsigned long long int var_14 = 14527835612063714201ULL;
int zero = 0;
signed char var_15 = (signed char)-108;
unsigned int var_16 = 788702891U;
long long int var_17 = -4102824792944718459LL;
signed char var_18 = (signed char)20;
signed char var_19 = (signed char)-78;
unsigned char var_20 = (unsigned char)46;
unsigned short var_21 = (unsigned short)56040;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_6 [24] [24] ;
unsigned char arr_10 [24] ;
unsigned long long int arr_12 [24] [24] ;
int arr_14 [15] ;
unsigned short arr_17 [15] ;
signed char arr_3 [21] ;
int arr_4 [21] [21] ;
unsigned char arr_8 [24] [24] ;
unsigned long long int arr_9 [24] ;
unsigned char arr_13 [24] [24] ;
unsigned long long int arr_18 [15] [15] ;
unsigned char arr_19 [15] ;
unsigned long long int arr_20 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1044812176228627104ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 12256356592043672926ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 11986824301314706200ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 263344342;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned short)19566;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 115638136;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 11996712592110645903ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = 9018796940459693820ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = 9894025359651511317ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
