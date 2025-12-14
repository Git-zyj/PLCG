#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_14 = (signed char)-104;
int zero = 0;
unsigned long long int var_16 = 381503523122530995ULL;
unsigned int var_17 = 277672121U;
_Bool var_18 = (_Bool)1;
unsigned long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
signed char arr_2 [13] [13] ;
signed char arr_3 [13] ;
_Bool arr_4 [13] ;
unsigned long long int arr_5 [13] ;
unsigned long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2114557332935866431ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2584406405245430075ULL : 13437757196503330676ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7519137797050033150ULL : 11429450959431007557ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7999612852690610070ULL : 17317258699773462465ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
