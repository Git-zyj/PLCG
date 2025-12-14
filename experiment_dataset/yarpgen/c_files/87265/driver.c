#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)30;
unsigned short var_3 = (unsigned short)38426;
unsigned long long int var_4 = 10387612035125858589ULL;
unsigned short var_5 = (unsigned short)37860;
unsigned char var_6 = (unsigned char)200;
signed char var_7 = (signed char)-15;
signed char var_10 = (signed char)-61;
signed char var_11 = (signed char)-86;
int zero = 0;
long long int var_12 = -2394080753233091241LL;
unsigned long long int var_13 = 16488376745930925102ULL;
signed char var_14 = (signed char)-124;
unsigned long long int var_15 = 17693028415958293726ULL;
unsigned int var_16 = 4066042444U;
signed char arr_0 [25] ;
unsigned int arr_1 [25] [25] ;
signed char arr_2 [25] ;
int arr_3 [25] ;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3862871159U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1418825855;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)13506;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
