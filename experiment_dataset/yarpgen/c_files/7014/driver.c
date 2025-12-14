#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28725;
signed char var_2 = (signed char)-71;
unsigned short var_3 = (unsigned short)18153;
long long int var_5 = -6044408961456114236LL;
long long int var_7 = -333709519388204041LL;
unsigned short var_8 = (unsigned short)17102;
long long int var_12 = -2936231688258260869LL;
unsigned int var_13 = 1150831237U;
unsigned char var_15 = (unsigned char)221;
int zero = 0;
unsigned int var_17 = 3729625336U;
signed char var_18 = (signed char)(-127 - 1);
short var_19 = (short)-29156;
unsigned short var_20 = (unsigned short)40975;
int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1695593941;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 206182158605761101ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)158;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
