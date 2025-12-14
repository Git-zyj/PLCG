#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25024;
unsigned int var_2 = 1881768893U;
signed char var_4 = (signed char)85;
int var_7 = 620613760;
unsigned short var_8 = (unsigned short)3476;
int zero = 0;
long long int var_10 = 8263124517218833890LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)5323;
long long int var_13 = -2280780906409439872LL;
short var_14 = (short)26955;
unsigned int var_15 = 2588387178U;
unsigned short var_16 = (unsigned short)43564;
unsigned char arr_0 [17] ;
unsigned char arr_1 [17] ;
long long int arr_3 [13] [13] ;
unsigned int arr_4 [13] [13] ;
unsigned char arr_5 [13] ;
unsigned short arr_2 [17] [17] ;
unsigned short arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -7090580993881329536LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 468264696U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)16274;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)46088;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
