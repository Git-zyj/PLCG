#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17206503380388201921ULL;
unsigned char var_3 = (unsigned char)21;
unsigned short var_5 = (unsigned short)19127;
short var_6 = (short)-31506;
unsigned int var_7 = 217475607U;
unsigned long long int var_8 = 2507928623856061161ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)69;
short var_11 = (short)-7132;
long long int var_12 = 7444779420825875718LL;
_Bool var_13 = (_Bool)1;
long long int arr_0 [19] ;
int arr_2 [19] [19] ;
_Bool arr_3 [19] [19] ;
int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -9017454601133781339LL : -8821455768966159268LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 1878233321;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1453042198 : -2042016290;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
