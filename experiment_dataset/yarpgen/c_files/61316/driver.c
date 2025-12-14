#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 379412157U;
unsigned int var_3 = 368274734U;
long long int var_5 = 6107318433471790357LL;
unsigned char var_6 = (unsigned char)125;
unsigned int var_10 = 1050124934U;
short var_11 = (short)28305;
_Bool var_14 = (_Bool)1;
long long int var_16 = 4422481823491790529LL;
int zero = 0;
long long int var_17 = 8835785459548700977LL;
unsigned long long int var_18 = 11792734702115786795ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-21;
unsigned int var_22 = 3040101872U;
long long int var_23 = -3881855350973672151LL;
int arr_0 [19] [19] ;
_Bool arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2110251536;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
