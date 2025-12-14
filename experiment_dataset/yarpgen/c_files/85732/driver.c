#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned short var_2 = (unsigned short)8528;
short var_3 = (short)21737;
short var_4 = (short)-22508;
unsigned char var_6 = (unsigned char)164;
short var_7 = (short)-16589;
unsigned short var_8 = (unsigned short)43951;
unsigned short var_9 = (unsigned short)23059;
unsigned char var_12 = (unsigned char)132;
short var_13 = (short)-31560;
short var_14 = (short)-18977;
int zero = 0;
short var_15 = (short)-27772;
unsigned char var_16 = (unsigned char)204;
unsigned char var_17 = (unsigned char)84;
unsigned short var_18 = (unsigned short)54189;
short var_19 = (short)-22355;
unsigned short arr_4 [24] ;
unsigned char arr_7 [17] [17] ;
short arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)60298;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-5358;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
