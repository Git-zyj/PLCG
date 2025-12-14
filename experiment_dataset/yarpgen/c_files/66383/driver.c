#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1318123568;
unsigned long long int var_2 = 14059443637294221747ULL;
unsigned long long int var_4 = 5330588010362433255ULL;
int var_6 = 614481003;
int var_12 = 655409530;
int zero = 0;
int var_14 = -13387433;
int var_15 = 906645327;
unsigned long long int var_16 = 11482887009050540231ULL;
unsigned long long int var_17 = 4610596908529799767ULL;
int var_18 = 803980579;
int arr_2 [11] ;
unsigned long long int arr_4 [11] ;
int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 692379790;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 7507424471513838088ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1703226547 : -326718667;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
