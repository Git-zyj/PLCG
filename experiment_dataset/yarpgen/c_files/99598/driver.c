#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1778502058U;
signed char var_2 = (signed char)12;
short var_3 = (short)32697;
signed char var_5 = (signed char)30;
long long int var_6 = 7883679041334077262LL;
signed char var_7 = (signed char)-6;
unsigned int var_8 = 4140633285U;
unsigned long long int var_9 = 7616436587179153398ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-69;
signed char var_12 = (signed char)57;
_Bool var_13 = (_Bool)1;
int var_14 = 630211526;
signed char var_15 = (signed char)5;
unsigned int var_16 = 1484279081U;
long long int var_17 = -5140100124356301639LL;
signed char var_18 = (signed char)87;
unsigned int var_19 = 1178480337U;
unsigned long long int var_20 = 3658473674428926978ULL;
unsigned long long int var_21 = 14476511579932381069ULL;
unsigned long long int var_22 = 11783933163921839068ULL;
unsigned long long int var_23 = 8929119716838392183ULL;
signed char arr_4 [22] [22] [22] ;
unsigned long long int arr_6 [11] [11] ;
int arr_13 [11] ;
int arr_16 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 8860642127787079166ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -1997508937 : 868371203;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = -388481748;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
