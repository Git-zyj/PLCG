#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29445;
unsigned long long int var_1 = 16734676710206075076ULL;
int var_2 = -1238165180;
unsigned short var_3 = (unsigned short)11341;
unsigned long long int var_5 = 303461394631245532ULL;
int var_6 = 896289957;
int var_7 = 1427076099;
short var_8 = (short)-11349;
unsigned short var_9 = (unsigned short)47363;
int var_10 = -1707480046;
unsigned short var_11 = (unsigned short)35521;
unsigned long long int var_12 = 15181798628249067763ULL;
int zero = 0;
int var_13 = -186421148;
unsigned long long int var_14 = 16646067633550244943ULL;
unsigned long long int var_15 = 13875947524130944271ULL;
unsigned short var_16 = (unsigned short)22644;
int var_17 = 799115476;
unsigned short arr_0 [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned short arr_5 [13] [13] ;
unsigned long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)46769 : (unsigned short)18396;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 9334961199718459498ULL : 135104865774677141ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)64828 : (unsigned short)24154;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 284453601924277603ULL : 5969611986747974562ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
