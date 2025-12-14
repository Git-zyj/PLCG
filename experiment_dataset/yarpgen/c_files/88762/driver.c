#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned long long int var_6 = 10335188885839653250ULL;
unsigned char var_7 = (unsigned char)249;
unsigned long long int var_8 = 18309161452109260203ULL;
unsigned short var_10 = (unsigned short)12981;
signed char var_11 = (signed char)-83;
int var_12 = 894366532;
int zero = 0;
unsigned long long int var_13 = 4280732729621353180ULL;
unsigned long long int var_14 = 13953129598322282305ULL;
unsigned char var_15 = (unsigned char)98;
unsigned int var_16 = 4127629229U;
int arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
_Bool arr_3 [15] [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 900084375 : -1371235606;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 16129445533074655069ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30222 : (unsigned short)5189;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
