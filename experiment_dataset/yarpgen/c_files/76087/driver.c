#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2591650896U;
unsigned long long int var_7 = 13900941347161287502ULL;
int var_8 = 836359495;
unsigned long long int var_13 = 13899201212093669185ULL;
int zero = 0;
short var_15 = (short)27225;
int var_16 = -1410647996;
unsigned short var_17 = (unsigned short)54036;
unsigned char var_18 = (unsigned char)7;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 3822693933204391841ULL;
unsigned long long int arr_1 [18] [18] ;
unsigned int arr_3 [18] ;
unsigned long long int arr_6 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 1903985400930530361ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3934426207U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2278332325220683685ULL;
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
