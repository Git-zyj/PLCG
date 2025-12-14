#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3040770040411447264LL;
int var_1 = 548635582;
signed char var_2 = (signed char)12;
unsigned char var_4 = (unsigned char)4;
long long int var_5 = 3540889676652860190LL;
signed char var_6 = (signed char)10;
int var_7 = -1426587584;
unsigned short var_8 = (unsigned short)11535;
signed char var_9 = (signed char)41;
int zero = 0;
int var_13 = 1694487941;
unsigned long long int var_14 = 15622478683687289838ULL;
unsigned short var_15 = (unsigned short)23781;
unsigned short var_16 = (unsigned short)10986;
signed char var_17 = (signed char)46;
unsigned long long int var_18 = 9128493951154509555ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)194;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)1494;
unsigned long long int var_23 = 4566281669863243512ULL;
long long int arr_0 [14] ;
_Bool arr_2 [18] [18] ;
int arr_3 [18] ;
unsigned short arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -5723044189282164887LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1381306774;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)38975;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
