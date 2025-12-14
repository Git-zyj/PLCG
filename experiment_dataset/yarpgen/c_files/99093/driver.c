#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)3359;
unsigned long long int var_10 = 14298363380971750416ULL;
signed char var_12 = (signed char)-15;
unsigned short var_14 = (unsigned short)46786;
int zero = 0;
unsigned long long int var_15 = 4319719949590178533ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)14877;
unsigned char var_18 = (unsigned char)40;
unsigned long long int var_19 = 359556826581644715ULL;
unsigned int var_20 = 3198593395U;
long long int arr_0 [12] ;
_Bool arr_2 [12] ;
unsigned int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -3514795411495703363LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2095042271U : 1244446470U;
}

void checksum() {
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
