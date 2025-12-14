#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_5 = (short)3456;
unsigned short var_6 = (unsigned short)36353;
long long int var_7 = 8550183574158653127LL;
unsigned int var_9 = 69801168U;
int var_11 = 1733986021;
unsigned short var_14 = (unsigned short)8826;
int zero = 0;
unsigned char var_17 = (unsigned char)235;
unsigned short var_18 = (unsigned short)29995;
unsigned long long int var_19 = 4524986603576741807ULL;
unsigned char var_20 = (unsigned char)39;
unsigned char var_21 = (unsigned char)107;
unsigned short arr_0 [23] [23] ;
unsigned short arr_2 [23] ;
short arr_3 [23] [23] [23] ;
unsigned char arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
long long int arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)6496;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)27613;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-24982;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)23885;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8984302419528053779LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
