#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -473689710;
unsigned char var_1 = (unsigned char)11;
unsigned char var_2 = (unsigned char)79;
short var_3 = (short)-32338;
long long int var_4 = 708573043418025745LL;
signed char var_5 = (signed char)-9;
unsigned int var_6 = 2819427027U;
int var_7 = -2108924237;
unsigned int var_8 = 2172452397U;
int zero = 0;
long long int var_11 = 644328449270759991LL;
short var_12 = (short)14971;
short var_13 = (short)30766;
unsigned int var_14 = 1133377306U;
long long int var_15 = -3108960230432013086LL;
unsigned short var_16 = (unsigned short)49070;
unsigned char arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
short arr_3 [11] ;
int arr_7 [21] ;
long long int arr_4 [11] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)30394;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)41972;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)12147 : (short)9904;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1313361073 : -1896418382;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -5331622494295320194LL : 8295261716858329345LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1388166474 : 809336388;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
