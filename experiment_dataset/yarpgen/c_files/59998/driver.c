#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2395162988U;
short var_5 = (short)27091;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 3301992791U;
int var_14 = -1661311945;
int var_16 = -1834216007;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8076101699551970813LL;
unsigned int var_21 = 254144312U;
short var_22 = (short)-27674;
unsigned short var_23 = (unsigned short)37318;
unsigned int var_24 = 1538751544U;
int var_25 = 423887017;
unsigned int var_26 = 816172900U;
long long int var_27 = 5192634223299974884LL;
long long int arr_0 [24] [24] ;
unsigned short arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
long long int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -7008885733596438255LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)41432;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)42738;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 6849583083772699098LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
