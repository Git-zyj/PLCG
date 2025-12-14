#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3353993207U;
unsigned int var_7 = 1623554574U;
unsigned long long int var_8 = 16285017017118838763ULL;
int zero = 0;
short var_15 = (short)23080;
short var_16 = (short)-2929;
unsigned long long int var_17 = 15390720608219386695ULL;
unsigned short var_18 = (unsigned short)36792;
int var_19 = 174799677;
unsigned char var_20 = (unsigned char)95;
long long int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned short arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 6012152666590462732LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2017400847871476550ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)35392;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
