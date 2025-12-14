#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -2008122946300245609LL;
signed char var_10 = (signed char)88;
int var_12 = -729401364;
long long int var_15 = 3375212146612568703LL;
int zero = 0;
unsigned int var_17 = 1454007962U;
unsigned short var_18 = (unsigned short)25788;
unsigned char var_19 = (unsigned char)33;
short var_20 = (short)-1944;
_Bool var_21 = (_Bool)0;
int var_22 = 282351262;
unsigned short var_23 = (unsigned short)36376;
unsigned long long int var_24 = 12779239348263708002ULL;
short arr_4 [20] [20] [20] ;
long long int arr_6 [20] ;
unsigned int arr_13 [13] [13] ;
unsigned int arr_14 [13] ;
int arr_15 [13] ;
long long int arr_5 [20] ;
int arr_12 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)5367;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 8626762754571422430LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 2932964542U : 2286001889U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 3258056790U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 666833399;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -3521100390376575231LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -1090106005;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
