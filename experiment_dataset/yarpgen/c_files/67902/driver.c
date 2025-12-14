#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
unsigned int var_1 = 2594419820U;
unsigned char var_2 = (unsigned char)51;
short var_3 = (short)-12806;
unsigned long long int var_4 = 17606427953292375058ULL;
unsigned char var_5 = (unsigned char)149;
long long int var_6 = 4262296286084187762LL;
unsigned char var_7 = (unsigned char)62;
unsigned int var_8 = 3853470171U;
signed char var_9 = (signed char)53;
long long int var_10 = 5005455434662349133LL;
int zero = 0;
signed char var_11 = (signed char)60;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-3284;
unsigned long long int var_14 = 1550041378319265850ULL;
short var_15 = (short)15327;
unsigned long long int var_16 = 2298070849431396156ULL;
signed char var_17 = (signed char)122;
unsigned char arr_4 [11] [11] [11] ;
unsigned long long int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 18025589846833528454ULL : 4305472615245094541ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
