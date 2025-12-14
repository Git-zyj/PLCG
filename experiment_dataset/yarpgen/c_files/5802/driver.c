#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1598168675U;
unsigned int var_4 = 1645548579U;
int var_5 = -363777566;
unsigned int var_6 = 3091696425U;
short var_7 = (short)-21919;
_Bool var_9 = (_Bool)1;
short var_12 = (short)7341;
int zero = 0;
unsigned long long int var_19 = 16564345515172786141ULL;
long long int var_20 = 5023062515046541781LL;
unsigned short var_21 = (unsigned short)40238;
signed char var_22 = (signed char)-100;
short var_23 = (short)-27063;
long long int var_24 = -8657283483761679016LL;
unsigned long long int var_25 = 5516119220452210833ULL;
unsigned long long int arr_2 [18] [18] ;
long long int arr_11 [10] ;
unsigned long long int arr_13 [22] ;
unsigned int arr_12 [10] ;
_Bool arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2533194910549950807ULL : 7623041138790218858ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = -2215154006845954153LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 7764895728688848095ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 3721781740U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
