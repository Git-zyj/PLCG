#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
_Bool var_2 = (_Bool)1;
int var_3 = -2081239668;
unsigned int var_7 = 1966988727U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12203042503486531142ULL;
unsigned long long int var_12 = 13221946736319677387ULL;
long long int var_15 = 4417926400268366432LL;
int zero = 0;
unsigned char var_16 = (unsigned char)45;
unsigned long long int var_17 = 17249188607481144666ULL;
unsigned long long int var_18 = 16186666105377320208ULL;
int var_19 = -2108145918;
unsigned char var_20 = (unsigned char)190;
unsigned long long int var_21 = 5095829594135297995ULL;
int arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_3 [17] ;
unsigned int arr_4 [17] [17] ;
int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1723207473;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3028559655030529033ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 3247331557U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 863645618U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = -539938597;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
