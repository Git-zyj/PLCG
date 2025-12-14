#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 949373187387827419LL;
long long int var_6 = -5672519685440220302LL;
unsigned int var_7 = 2612104574U;
short var_8 = (short)-10121;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 13135324474036322181ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)36722;
signed char var_13 = (signed char)81;
signed char var_14 = (signed char)-33;
short var_15 = (short)13475;
unsigned short var_16 = (unsigned short)40418;
unsigned long long int arr_0 [16] [16] ;
long long int arr_1 [16] ;
_Bool arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 4703050855691266452ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -3939658220554909906LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
