#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7729293258903562651LL;
long long int var_4 = -7452389298886762846LL;
unsigned short var_7 = (unsigned short)4598;
int var_11 = -1975050591;
_Bool var_12 = (_Bool)0;
short var_14 = (short)29832;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2215630493U;
unsigned short var_18 = (unsigned short)13944;
_Bool var_19 = (_Bool)0;
short var_20 = (short)3136;
int var_21 = 1168266262;
unsigned short var_22 = (unsigned short)39295;
unsigned short arr_5 [23] [23] ;
long long int arr_8 [24] [24] ;
long long int arr_9 [24] ;
unsigned int arr_6 [23] [23] ;
unsigned int arr_10 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)2032;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = -5239396893915551377LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -4048100149678369284LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 2783764852U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 2658462456U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
