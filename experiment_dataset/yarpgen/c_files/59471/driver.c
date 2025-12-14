#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 152006278695100899LL;
unsigned int var_1 = 18192579U;
short var_2 = (short)12844;
unsigned int var_3 = 761968716U;
unsigned int var_4 = 1558673957U;
unsigned int var_6 = 4225904707U;
unsigned int var_8 = 2143133724U;
signed char var_9 = (signed char)81;
signed char var_10 = (signed char)20;
long long int var_11 = 2012604196556875410LL;
int zero = 0;
unsigned int var_12 = 4048317090U;
signed char var_13 = (signed char)-40;
unsigned int var_14 = 1461109815U;
long long int var_15 = -4420740092811634176LL;
int var_16 = 1506313335;
signed char var_17 = (signed char)47;
unsigned int var_18 = 2463528680U;
unsigned long long int var_19 = 9488475324222806159ULL;
short arr_0 [14] ;
unsigned int arr_2 [14] [14] ;
signed char arr_3 [14] ;
unsigned short arr_10 [14] [14] ;
short arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)26235;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 2047492525U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)29809;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-11570;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
