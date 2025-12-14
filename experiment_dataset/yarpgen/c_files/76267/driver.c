#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26334;
unsigned short var_5 = (unsigned short)45923;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_12 = 2114593677720411753LL;
signed char var_13 = (signed char)-22;
long long int var_14 = -1251397543014341136LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)28091;
int var_17 = 823531855;
long long int arr_1 [15] ;
short arr_2 [15] ;
long long int arr_3 [15] ;
_Bool arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3457407853755366708LL : -8388806790478366734LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)21233;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3961081517817182618LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
