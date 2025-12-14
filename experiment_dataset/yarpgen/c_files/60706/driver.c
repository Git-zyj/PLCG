#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
unsigned short var_1 = (unsigned short)12685;
unsigned int var_6 = 1577404313U;
unsigned short var_7 = (unsigned short)13472;
long long int var_9 = 2108807581046430797LL;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned int var_11 = 3832817440U;
int var_12 = 1104459003;
int var_13 = -1662158288;
long long int var_14 = -575421164179952647LL;
unsigned char var_15 = (unsigned char)120;
unsigned char var_16 = (unsigned char)64;
unsigned char var_17 = (unsigned char)68;
unsigned int var_18 = 81081843U;
int var_19 = 930627415;
short var_20 = (short)-26876;
short var_21 = (short)-6325;
unsigned int arr_0 [22] ;
long long int arr_1 [22] [22] ;
long long int arr_2 [22] ;
long long int arr_4 [10] ;
unsigned int arr_5 [10] ;
int arr_10 [19] ;
unsigned int arr_13 [25] ;
unsigned int arr_14 [25] ;
unsigned int arr_3 [22] [22] ;
long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 534964098U : 3011802615U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -8178508639251321193LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 5717783053975571181LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 7662012832567424009LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 3815385620U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = -1795579838;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 1446705773U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = 3916247754U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2793651802U : 67153735U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -7233211171082113171LL : -5946840606369066839LL;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
