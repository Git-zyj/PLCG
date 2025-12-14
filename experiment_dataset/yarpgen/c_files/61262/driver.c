#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1724867870U;
unsigned int var_3 = 3612886006U;
signed char var_4 = (signed char)29;
long long int var_5 = 6655469595970498696LL;
signed char var_6 = (signed char)-84;
long long int var_7 = -5407963091864014561LL;
unsigned long long int var_8 = 11818822924951139958ULL;
unsigned int var_10 = 4173428203U;
int zero = 0;
unsigned short var_14 = (unsigned short)45610;
int var_15 = -447013488;
unsigned char var_16 = (unsigned char)234;
unsigned int var_17 = 2100271555U;
signed char arr_0 [15] ;
long long int arr_1 [15] [15] ;
int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 3583189549243685209LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1442213007;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
