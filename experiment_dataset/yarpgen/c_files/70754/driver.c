#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32473;
int var_5 = 92776933;
long long int var_9 = -3377882597511774842LL;
int var_10 = -1776910548;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5532626191877513460LL;
int zero = 0;
signed char var_17 = (signed char)-24;
int var_18 = 176056082;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 10035844671448526921ULL;
unsigned int var_21 = 1895252417U;
long long int var_22 = 5315429536973696025LL;
signed char var_23 = (signed char)-81;
long long int arr_0 [21] ;
_Bool arr_1 [21] [21] ;
long long int arr_2 [17] ;
long long int arr_4 [17] [17] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -7674474025601901965LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 6414583895246074711LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 344469970713698038LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
