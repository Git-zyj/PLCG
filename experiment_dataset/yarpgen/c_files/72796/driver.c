#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2379644690209641428ULL;
long long int var_7 = -5222833509466152109LL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_16 = (unsigned char)39;
int zero = 0;
long long int var_19 = -7642821133244852332LL;
unsigned int var_20 = 2984637547U;
int var_21 = -1451376221;
_Bool var_22 = (_Bool)0;
int var_23 = 1569835216;
long long int var_24 = 6184436925611703613LL;
int var_25 = 33911672;
long long int var_26 = 7635438267006139725LL;
int var_27 = 1047923192;
long long int arr_0 [19] ;
_Bool arr_1 [19] ;
_Bool arr_4 [17] ;
unsigned int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 783381503821832533LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 281284412U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
