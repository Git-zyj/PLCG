#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6392843552655248358LL;
int var_1 = 1491804551;
short var_2 = (short)-27882;
unsigned char var_3 = (unsigned char)48;
unsigned short var_5 = (unsigned short)63783;
short var_8 = (short)-9982;
unsigned short var_10 = (unsigned short)3477;
short var_11 = (short)-2597;
unsigned long long int var_12 = 14541647739087626370ULL;
int zero = 0;
short var_13 = (short)-1684;
int var_14 = -950342509;
unsigned char var_15 = (unsigned char)26;
short var_16 = (short)5383;
short var_17 = (short)-29137;
unsigned long long int arr_0 [14] [14] ;
unsigned short arr_1 [14] [14] ;
signed char arr_2 [14] [14] ;
short arr_3 [14] ;
unsigned long long int arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 6512945082794932815ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)43696;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (short)31480;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 9812306822333647248ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
