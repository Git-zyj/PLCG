#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 926349694310112156LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -3038173902965874418LL;
unsigned short var_4 = (unsigned short)59659;
long long int var_5 = -7642887050349398173LL;
unsigned short var_6 = (unsigned short)57934;
short var_9 = (short)23175;
unsigned long long int var_10 = 18401793336627925241ULL;
unsigned short var_11 = (unsigned short)10339;
unsigned int var_12 = 115175720U;
signed char var_13 = (signed char)-13;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)24668;
long long int var_16 = 6136456207336986725LL;
unsigned short var_17 = (unsigned short)61284;
unsigned char var_18 = (unsigned char)24;
unsigned long long int var_19 = 7960969025894190356ULL;
unsigned long long int var_20 = 7425962850858086386ULL;
signed char var_21 = (signed char)-103;
int var_22 = 1318896224;
signed char var_23 = (signed char)-15;
unsigned short arr_1 [24] [24] ;
_Bool arr_2 [24] ;
int arr_4 [24] ;
long long int arr_7 [24] [24] [24] [24] ;
int arr_14 [20] ;
unsigned int arr_11 [24] ;
unsigned long long int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)29201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 656288809;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 7404340476162366693LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = -407711321;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2505254175U : 491810202U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 1467525372370707884ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
