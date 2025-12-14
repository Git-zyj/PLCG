#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1890402701;
unsigned char var_6 = (unsigned char)9;
short var_7 = (short)-7080;
unsigned int var_8 = 13536452U;
unsigned short var_10 = (unsigned short)185;
int var_12 = -101327764;
int var_13 = -648028491;
int zero = 0;
unsigned short var_16 = (unsigned short)2985;
unsigned short var_17 = (unsigned short)23302;
short var_18 = (short)-3507;
int var_19 = 1221224947;
int arr_0 [13] ;
unsigned short arr_1 [13] ;
int arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1954844548 : 98192341;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)57111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -904561010 : 1216518792;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14603 : (unsigned short)16194;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
