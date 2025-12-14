#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)63;
unsigned long long int var_4 = 12479399501512924772ULL;
signed char var_5 = (signed char)124;
int var_7 = -1099216778;
signed char var_8 = (signed char)111;
int zero = 0;
signed char var_10 = (signed char)104;
short var_11 = (short)-20966;
unsigned short var_12 = (unsigned short)4775;
short var_13 = (short)-25143;
unsigned int var_14 = 2226300835U;
unsigned int var_15 = 3013777697U;
short arr_0 [20] [20] ;
int arr_2 [20] ;
unsigned int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-9450;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1365146058;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1563662276U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
