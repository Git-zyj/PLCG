#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21746;
int var_1 = 837359605;
unsigned short var_2 = (unsigned short)32965;
unsigned char var_3 = (unsigned char)199;
signed char var_4 = (signed char)58;
unsigned char var_7 = (unsigned char)131;
unsigned int var_8 = 3738417916U;
unsigned int var_9 = 3609739884U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)86;
int zero = 0;
signed char var_12 = (signed char)95;
unsigned int var_13 = 329109775U;
short var_14 = (short)-30251;
unsigned int var_15 = 720130165U;
unsigned long long int var_16 = 182137603226360755ULL;
_Bool arr_1 [12] [12] ;
unsigned char arr_2 [12] ;
unsigned long long int arr_3 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 12879038020118733556ULL : 646377918575190366ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)48 : (signed char)84;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
