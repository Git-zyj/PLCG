#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23224;
unsigned char var_10 = (unsigned char)137;
short var_12 = (short)-26789;
unsigned short var_13 = (unsigned short)248;
long long int var_14 = 5725627405368191742LL;
unsigned char var_15 = (unsigned char)4;
int zero = 0;
unsigned char var_16 = (unsigned char)203;
unsigned long long int var_17 = 7230670215059206855ULL;
unsigned short var_18 = (unsigned short)24614;
unsigned short var_19 = (unsigned short)7100;
unsigned long long int var_20 = 6841613206915803729ULL;
int var_21 = -311142293;
long long int var_22 = -1279401515026452238LL;
signed char arr_0 [21] ;
int arr_1 [21] ;
short arr_8 [21] ;
unsigned char arr_11 [21] [21] [21] [21] [21] ;
unsigned long long int arr_13 [21] [21] [21] ;
signed char arr_14 [21] [21] [21] ;
signed char arr_19 [21] [21] ;
unsigned short arr_25 [13] ;
long long int arr_26 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1663433335;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (short)-25822;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 17063210301246066510ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45794 : (unsigned short)44752;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? -925256139073367003LL : -1855914944742331821LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
