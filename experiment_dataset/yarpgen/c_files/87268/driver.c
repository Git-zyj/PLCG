#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7724404401645532435LL;
short var_1 = (short)31098;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 135418157U;
long long int var_4 = -1726414724542104999LL;
unsigned long long int var_5 = 18132506847386667833ULL;
unsigned char var_6 = (unsigned char)111;
short var_7 = (short)-17910;
unsigned int var_9 = 1795109764U;
unsigned long long int var_10 = 12986197840689201105ULL;
long long int var_11 = -1105209337951817673LL;
signed char var_12 = (signed char)-1;
int zero = 0;
long long int var_13 = 7557704875807193293LL;
unsigned int var_14 = 3058131364U;
signed char var_15 = (signed char)-96;
unsigned long long int var_16 = 15379692163857679322ULL;
short var_17 = (short)30053;
unsigned short var_18 = (unsigned short)23213;
int var_19 = -1491355609;
unsigned int var_20 = 2598737879U;
signed char arr_0 [23] [23] ;
unsigned short arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
_Bool arr_3 [18] [18] ;
int arr_4 [18] ;
short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)1423;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2552686773U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1247365479;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)18242;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
