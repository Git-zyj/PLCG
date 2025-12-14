#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40648;
short var_2 = (short)-15721;
int var_3 = -1176769278;
short var_5 = (short)-26839;
unsigned char var_6 = (unsigned char)52;
unsigned short var_7 = (unsigned short)60999;
int zero = 0;
unsigned short var_12 = (unsigned short)49811;
unsigned long long int var_13 = 10190437533209906205ULL;
unsigned char var_14 = (unsigned char)239;
signed char var_15 = (signed char)96;
short var_16 = (short)6212;
int arr_0 [22] ;
int arr_1 [22] ;
int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -2126955443;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 38118637;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -486528760 : -1309753643;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
