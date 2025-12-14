#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned char var_1 = (unsigned char)94;
unsigned int var_2 = 2483749145U;
unsigned long long int var_3 = 10882984391048851442ULL;
long long int var_7 = 3588120274457950641LL;
unsigned short var_8 = (unsigned short)42069;
long long int var_9 = -1502153281512477179LL;
unsigned char var_12 = (unsigned char)23;
unsigned char var_13 = (unsigned char)143;
unsigned long long int var_14 = 6582662851697287277ULL;
unsigned int var_15 = 991186490U;
int zero = 0;
unsigned int var_16 = 2122789848U;
unsigned int var_17 = 2834948599U;
long long int var_18 = 9195154066633097727LL;
unsigned char arr_1 [24] ;
short arr_2 [24] ;
unsigned char arr_3 [24] ;
unsigned short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-20701;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)41118;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
