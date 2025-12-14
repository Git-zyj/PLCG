#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned char var_15 = (unsigned char)11;
short var_16 = (short)-21733;
unsigned int var_17 = 1806636282U;
unsigned int var_18 = 814390700U;
unsigned char var_19 = (unsigned char)68;
int var_20 = -1654523871;
short arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
int arr_10 [18] ;
unsigned int arr_11 [18] ;
unsigned char arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-9085;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 942847834;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = 3553156768U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
