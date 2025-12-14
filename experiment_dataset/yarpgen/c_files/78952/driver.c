#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)132;
long long int var_5 = -4375178482875908892LL;
unsigned short var_15 = (unsigned short)30300;
int zero = 0;
short var_16 = (short)-27148;
signed char var_17 = (signed char)35;
unsigned char var_18 = (unsigned char)4;
short var_19 = (short)29693;
short var_20 = (short)-908;
unsigned long long int var_21 = 14823302977100975504ULL;
long long int var_22 = -6843486982276499173LL;
long long int arr_8 [14] ;
unsigned int arr_6 [21] ;
long long int arr_13 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 5050071516589171501LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3297073119U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = 4525304185281907771LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
