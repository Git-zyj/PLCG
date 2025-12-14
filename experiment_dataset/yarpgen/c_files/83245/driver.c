#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1339492588U;
signed char var_3 = (signed char)91;
int var_6 = -1556120452;
short var_8 = (short)-16658;
unsigned char var_10 = (unsigned char)148;
signed char var_12 = (signed char)-75;
unsigned long long int var_13 = 10259046601757856994ULL;
short var_14 = (short)2827;
int var_15 = 1098402729;
unsigned long long int var_16 = 3201085526210981985ULL;
int zero = 0;
int var_17 = 1770536871;
short var_18 = (short)-28661;
int var_19 = -1630534949;
unsigned int arr_0 [25] ;
signed char arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3492667043U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-75;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
