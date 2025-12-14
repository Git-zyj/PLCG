#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
int var_1 = 433572490;
int var_2 = 1459171661;
unsigned long long int var_3 = 8174965111762680430ULL;
unsigned long long int var_4 = 16125236851588322589ULL;
unsigned short var_5 = (unsigned short)60752;
unsigned short var_6 = (unsigned short)37436;
int var_7 = 972215963;
signed char var_8 = (signed char)96;
unsigned short var_9 = (unsigned short)29004;
int zero = 0;
long long int var_10 = -4283789410946146487LL;
unsigned long long int var_11 = 14886389165559546515ULL;
long long int var_12 = -1317781004567826081LL;
unsigned short var_13 = (unsigned short)53827;
unsigned short var_14 = (unsigned short)59567;
int var_15 = 341588577;
unsigned char var_16 = (unsigned char)122;
_Bool var_17 = (_Bool)1;
signed char arr_0 [18] [18] ;
unsigned short arr_3 [18] [18] [18] ;
_Bool arr_5 [18] ;
unsigned short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)4181;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)50775;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
