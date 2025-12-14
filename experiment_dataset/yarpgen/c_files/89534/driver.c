#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -215331137;
int var_1 = 815620952;
int var_2 = -910776286;
int var_3 = -232701507;
int var_4 = 1655926199;
int var_6 = -843840261;
int var_7 = 494011326;
int var_8 = -263707790;
int var_9 = 1945441022;
int var_10 = -1596621171;
int var_11 = 1592878649;
int zero = 0;
int var_13 = 99967534;
int var_14 = -1522754290;
int var_15 = -563645646;
int var_16 = -747217606;
int var_17 = 706211514;
int var_18 = 1465306509;
int arr_0 [19] ;
int arr_1 [19] ;
int arr_2 [19] ;
int arr_3 [19] [19] ;
int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1792422114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1741742610;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 857124065;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -1647160558;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -1352687391;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
