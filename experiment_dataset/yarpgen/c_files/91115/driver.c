#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44180;
signed char var_1 = (signed char)18;
unsigned long long int var_2 = 9414587244344236980ULL;
long long int var_6 = -1223270024366463414LL;
unsigned long long int var_7 = 5193919463301977881ULL;
long long int var_9 = -8098343386482253947LL;
short var_11 = (short)4913;
unsigned long long int var_12 = 17873668215461859239ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 1696375050277699624LL;
unsigned short var_15 = (unsigned short)28720;
_Bool var_16 = (_Bool)1;
short arr_1 [10] ;
long long int arr_2 [10] [10] ;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-32003;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -3182209083540215341LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 16853002237308285559ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
