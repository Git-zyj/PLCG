#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)21733;
unsigned int var_2 = 3627902310U;
unsigned long long int var_3 = 9608996720310285080ULL;
signed char var_4 = (signed char)41;
unsigned long long int var_5 = 12989188307234732222ULL;
long long int var_7 = -5970546275812618033LL;
long long int var_10 = -3686245703579207107LL;
int zero = 0;
signed char var_11 = (signed char)1;
unsigned long long int var_12 = 2480252207498143907ULL;
short var_13 = (short)-8663;
signed char var_14 = (signed char)70;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8476239775948496118LL;
unsigned short var_17 = (unsigned short)49184;
signed char var_18 = (signed char)68;
long long int var_19 = -8796318057430391190LL;
signed char arr_0 [11] ;
signed char arr_1 [11] [11] ;
long long int arr_2 [11] [11] ;
signed char arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
short arr_9 [16] ;
long long int arr_11 [15] ;
unsigned short arr_13 [15] [15] ;
unsigned int arr_5 [12] ;
unsigned int arr_10 [16] ;
long long int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-122 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -1514694315945537352LL : 5376911683032873253LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-49 : (signed char)123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 296939231693934107ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-10623 : (short)28937;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = -4630781934652918853LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38510 : (unsigned short)3097;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 513186743U : 3161003197U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2571309842U : 2655228315U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -3512952048839821235LL : 1281567150072986398LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
