#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2735971557U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 4893640842355289157ULL;
long long int var_11 = 8421492577580366249LL;
long long int var_12 = -72074308885537370LL;
int var_13 = -1053962453;
int zero = 0;
long long int var_15 = 4698447694306311909LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1419355576U;
unsigned int var_18 = 2076616617U;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 425577175763307996ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9138376613025438269ULL : 15807234001601593394ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
