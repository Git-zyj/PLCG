#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 376672547;
unsigned short var_1 = (unsigned short)29074;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2054000101000630165LL;
short var_9 = (short)18018;
_Bool var_10 = (_Bool)0;
short var_11 = (short)6463;
int zero = 0;
int var_12 = -900236227;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4163105729U;
unsigned long long int var_15 = 16676497234705875237ULL;
unsigned int var_16 = 2143302529U;
long long int var_17 = 6054259639619120449LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7216776199858359206LL;
unsigned int arr_1 [19] [19] ;
unsigned short arr_4 [19] ;
_Bool arr_5 [19] ;
_Bool arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 3004702062U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)14594;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
