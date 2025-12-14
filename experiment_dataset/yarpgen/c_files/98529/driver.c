#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2726858278397228050LL;
int var_1 = 1615645258;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_5 = (short)18734;
unsigned short var_9 = (unsigned short)62687;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -4846354950835410036LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)62;
long long int var_15 = 8763286525392749523LL;
long long int var_16 = 5205276923463065661LL;
long long int var_17 = -3860096661621253776LL;
int var_18 = -574916342;
short arr_0 [10] ;
unsigned int arr_8 [22] [22] ;
unsigned int arr_2 [10] ;
unsigned int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)24861;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 1692289130U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3091141527U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 2748808305U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
