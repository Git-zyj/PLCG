#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1224101107742438053LL;
long long int var_3 = -2376009953488852681LL;
long long int var_4 = 2106243509685293785LL;
unsigned short var_5 = (unsigned short)58009;
int var_8 = -2021490766;
short var_15 = (short)-26440;
short var_17 = (short)-18525;
int zero = 0;
signed char var_18 = (signed char)29;
unsigned short var_19 = (unsigned short)27285;
int var_20 = 1872218651;
unsigned char var_21 = (unsigned char)218;
unsigned char var_22 = (unsigned char)57;
long long int var_23 = 3699589397128282459LL;
short var_24 = (short)-32320;
unsigned long long int var_25 = 17928553710534974312ULL;
short arr_2 [12] ;
unsigned long long int arr_8 [14] ;
_Bool arr_11 [14] [14] ;
short arr_13 [14] [14] [14] ;
unsigned char arr_3 [12] ;
unsigned char arr_4 [12] ;
short arr_5 [12] ;
unsigned int arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)13411;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 2250704164305495610ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-11377;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)160 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-13613 : (short)21874;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1497144402U : 690307454U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
