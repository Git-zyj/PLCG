#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2833980882U;
short var_3 = (short)26144;
unsigned short var_4 = (unsigned short)60691;
unsigned char var_6 = (unsigned char)10;
long long int var_8 = 397502627400787187LL;
unsigned int var_9 = 3721620201U;
int zero = 0;
long long int var_10 = -1997583672789505496LL;
signed char var_11 = (signed char)-69;
unsigned long long int var_12 = 10397383180557409938ULL;
unsigned int var_13 = 3450648156U;
long long int var_14 = -449987537191229372LL;
int var_15 = -1449865814;
unsigned int var_16 = 921781457U;
signed char var_17 = (signed char)96;
long long int var_18 = -2716461932830569369LL;
unsigned int arr_0 [15] ;
long long int arr_3 [13] ;
short arr_4 [13] ;
int arr_7 [12] ;
unsigned short arr_8 [12] ;
signed char arr_5 [13] ;
int arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2125617884U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -6739752060418713452LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-23123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -61681275 : -1423749606;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54504 : (unsigned short)57308;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -1447656453 : -643193038;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
