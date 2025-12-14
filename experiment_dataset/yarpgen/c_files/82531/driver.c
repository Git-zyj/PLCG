#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-75;
long long int var_1 = -483813442560180475LL;
unsigned long long int var_3 = 18318749617183369398ULL;
long long int var_4 = -8545474708230083796LL;
unsigned char var_8 = (unsigned char)17;
long long int var_12 = 9193754564943535336LL;
unsigned long long int var_16 = 11983251930035770866ULL;
int zero = 0;
unsigned int var_17 = 3674053712U;
unsigned int var_18 = 4038382349U;
long long int var_19 = 5033429127085112126LL;
unsigned char var_20 = (unsigned char)245;
short var_21 = (short)1944;
unsigned short var_22 = (unsigned short)11990;
unsigned int var_23 = 4235171352U;
long long int var_24 = -4594396205437390679LL;
unsigned short var_25 = (unsigned short)13142;
long long int arr_0 [18] ;
unsigned char arr_1 [18] ;
long long int arr_2 [18] [18] ;
signed char arr_4 [13] ;
unsigned long long int arr_5 [13] [13] ;
long long int arr_10 [13] ;
_Bool arr_3 [18] ;
_Bool arr_8 [13] [13] ;
long long int arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2489451032950832303LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 1890530520358422977LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-94;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 1347701346921677347ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = -3795049821707019259LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -8285618018143933615LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
